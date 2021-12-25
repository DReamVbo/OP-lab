import string
import random


print("Enter the size of the array")
arraySize=int(input())
print("Minimum word size")
wordSize=int(input())
array=[]
i=0
while i<arraySize:
    array.append(random.choice(string.ascii_letters))
    i+=1
i=0
j=0
count=0
while i<=arraySize-wordSize:
    j=i+(wordSize-1)
    while j<arraySize:
        count+=1
        j+=1
    i+=1    
count=count*2
print("The number of words the length of which is greater than the specified "  + str(count))