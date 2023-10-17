#!/usr/bin/env python
# coding: utf-8

# In[20]:


import mediapipe as mp
import cv2 
import time
from tqdm import main, tqdm


# In[21]:


# import solutions
mp_pose = mp.solutions.pose

# import drawing functions
mp_drawing = mp.solutions.drawing_utils

#import model
pose = mp_pose.Pose(static_image_mode=False,       # Still pictures or continuous video frames
            model_complexity=2,            # Select the human pose key point detection model, 0 has poor performance but fast, 2 has good performance but slow, and 1 is in between
            smooth_landmarks=True,         # whether to smooth keypoints
            min_detection_confidence=0.5,  # confidence threshold
            min_tracking_confidence=0.5)   # tracking threshold


# In[22]:


# Custom description of 33 key points of the body
def process_frame(img):
    start_time = time.time()
    
    h, w = img.shape[0], img.shape[1]
    
    img_RGB = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
    
    results = pose.process(img_RGB)
    
    if results.pose_landmarks:
        mp_drawing.draw_landmarks(img, results.pose_landmarks, mp_pose.POSE_CONNECTIONS)
        
    for i in range(33): # Traverse 33 keypoints
        cx = int(results.pose_landmarks.landmark[i].x * w)
        cy = int(results.pose_landmarks.landmark[i].y * h)
        cz = results.pose_landmarks.landmark[i].z

        redius = 5
        if i == 0: #tip of the nose
            img = cv2.circle(img, (cx,cy), redius, (0,0,255), -1)
        elif i in [11,12]: #Shoulder
            img = cv2.circle(img, (cx,cy), redius, (223,155,6), -1)
        elif i in [23,24]: #hip joint
            img = cv2.circle(img, (cx,cy), redius, (1,240,255), -1)
        elif i in [13,14]: #elbow
            img = cv2.circle(img, (cx,cy), redius, (140,47,240), -1)
        elif i in [25,26]: #knee
            img = cv2.circle(img, (cx,cy), redius, (0,0,255), -1)
        elif i in [15,16,27,28]: #wrist and ankle
            img = cv2.circle(img, (cx,cy), redius, (223,155,60), -1)
        elif i in [17,19,21]: #left hand
            img = cv2.circle(img, (cx,cy), redius, (94,218,121), -1)
        elif i in [18,20,22]: #right hand
            img = cv2.circle(img, (cx,cy), redius, (16,144,247), -1)
        elif i in [27,29,31]: #left foot
            img = cv2.circle(img, (cx,cy), redius, (29,123,243), -1)
        elif i in [28,30,32]: #right foot
            img = cv2.circle(img, (cx,cy), redius, (193,182,255), -1)
        elif i in [9,10]: #mouth
            img = cv2.circle(img, (cx,cy), redius, (205,235,255), -1)
        elif i in [1,2,3,4,5,6,7,8]: #eyes and cheeks
            img = cv2.circle(img, (cx,cy), redius, (94,218,121), -1)
        else: #Other key points
            img = cv2.circle(img, (cx,cy), redius, (0,255,0), -1)

#         look_img(img)
    else:
        scaler = 1
        failuer_str = 'NO Person'
        img = cv2.putText(img, failuer_str, (25 * scaler, 100 * scaler), cv2.FONT_HERSHEY_SIMPLEX, 1.25 * scaler, 255,0,0)
    
    end_time = time.time()
    FPS = 1/(end_time - start_time)
    
    scaler = 1
    img = cv2.putText(img, 'FPS  '+str(int(FPS)), (25 * scaler, 50 * scaler), cv2.FONT_HERSHEY_SIMPLEX, 1.25 * scaler, 223,155,6)
    
    return img


# In[23]:


# Video frame-by-frame processing code template
def generate_video(input_path):
    filehead = input_path.split('/')[-1]
    output_path = "out-" + filehead
    
    print('Video starts processing',input_path)
    
    # Get the total number of frames in the video
    cap = cv2.VideoCapture(input_path)
    frame_count = 0
    while(cap.isOpened()):
        success, frame = cap.read()
        frame_count += 1
        if not success:
            break
    cap.release()
    print('The total number of video frames is',frame_count)
    
    # cv2.namedWindow('Crack Detection and Measurement Video Processing')
    cap = cv2.VideoCapture(input_path)
    frame_size = (cap.get(cv2.CAP_PROP_FRAME_WIDTH), cap.get(cv2.CAP_PROP_FRAME_HEIGHT))

    # fourcc = int(cap.get(cv2.CAP_PROP_FOURCC))
    # fourcc = cv2.VideoWriter_fourcc(*'XVID')
    fourcc = cv2.VideoWriter_fourcc(*'mp4v')
    fps = cap.get(cv2.CAP_PROP_FPS)

    out = cv2.VideoWriter(output_path, fourcc, fps, (int(frame_size[0]), int(frame_size[1])))
    
    # The progress bar is bound to the total number of frames of the video
    with tqdm(total=frame_count-1) as pbar:
        try:
            while(cap.isOpened()):
                success, frame = cap.read()
                if not success:
                    break

                # process frame
                # frame_path = './temp_frame.png'
                # cv2.imwrite(frame_path, frame)
                try:
                    frame = process_frame(frame)
                except:
                    print('error')
                    pass
                
                if success == True:
                    # cv2.imshow('Video Processing', frame)
                    out.write(frame)

                    # The progress bar updates one frame
                    pbar.update(1)

                # if cv2.waitKey(1) & 0xFF == ord('q'):
                    # break
        except:
            print('Interrupted')
            pass

    cv2.destroyAllWindows()
    out.release()
    cap.release()
    print('Video saved', output_path)


# In[24]:
if __name__ == '__main__':
    #Note: MacOs system may not be able to read the material information in the current directory due to security settings, you can put the material information in a directory that has permission to read, and then specify the absolute path of the material content
    generate_video("Replace with the absolute path address of your material") # 

