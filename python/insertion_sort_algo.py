def insertion_sort(arr):
   for i in range(1, len(arr),1):
      key = arr[i]                   #for getting each element
      j = i-1
      while j >= 0 and key< arr[j] : # to keep shifting until reaching index 0 or getting an element smaller than key
         arr[j + 1] = arr[j]
         j=j-1
      arr[j + 1] = key

arr = [4,6,1,7,2,5,9,8]
insertion_sort(arr)
for i in range(len(arr)):
   print (arr[i],end=" ")