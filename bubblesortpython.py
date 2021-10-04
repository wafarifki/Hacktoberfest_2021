import sys

def bubble_sort(arr):

    for x in range(len(arr)):
        for i in range(len(arr) - 1):
            if arr[i] > arr[i+1]:
               arr[i],arr[i+1] = arr[i+1],arr[i]

if __name__=="__main__":
   #e.g: pytho3 bubblesortpython.py "1,5,7,10,23,3"
   items = sys.argv[1]
   items = items.split(',')
   print ('before: ',items)
   bubble_sort(items)
   print ('after: ',items)
