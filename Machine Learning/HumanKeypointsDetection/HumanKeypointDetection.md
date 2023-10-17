# machine Learning
https://en.wikipedia.org/wiki/Machine_learning

# mediapipe
https://google.github.io/mediapipe/ 

# development environment
- python version: 3.7.6
- conda version: 4.10.3 
- Install jupyter notebook with Anaconda: conda install jupyter notebook
- Dependency library version
    - cv2: 4.5.4-dev
    - mediapipe: pip install mediapipe
    - tqdm: pip install tqdm

# Overview
-> This example relies on Google's open source machine learning framework MediaPipe to try to learn

-> In the material folder, the test material (materal.mp4) and the result of running through the model (out-material.mp4) are provided. You can realize more interesting scenes by modifying the material path in the code

-> The material folder also provides information on various points of the human body. You can modify the points of the process_frame method in the code to achieve the human detection position that you need to pay attention to

-> The project is divided into .ipynb and .py files. It is recommended that you use jupyter notebook to open .ipynb

-> Please modify the material path (absolute path) when using the .py file to run. MacOs system may not be able to directly read the material file in the current directory due to security and privacy restrictions, so please put the file on the desktop and modify the absolute path in the code.

-> The editor can use jupyter notebook or Vscode