#APPROACH -1
#SORTING THE INITIAL LIST AND RETURNING THE LAST ELEMENT OF LIST
def max(arr):

    arr.sort()
    return arr[-1]
#APPROACH -2
#ITERATING THROUGH ALL THE ELEMENTS IN LIST AND COMPARING EACH ELEMENT

def max(arr):
    
    max_element = arr[0]

    for i in range(len(arr)):
        if arr[i] > max_element:
            max_element = arr[i]

    return (max_element)

#APPROACH-3
#USING INBUILT FUNCTION
def max(arr):
    return (max(arr))