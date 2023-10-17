#The following code is for to find Maximum number from an given array

array=list(map(int,input().split()))

arr=array[0]   #By using logic :)
for i in range(1,len(array)):
    if arr<array[i]:
        arr=array[i]
        
print(arr)
