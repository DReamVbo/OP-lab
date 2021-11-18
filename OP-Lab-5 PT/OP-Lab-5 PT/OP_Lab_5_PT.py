import math
def IsPrimeNumber(value):
    j=2
    while j < value:
        if value % j == 0:
            return False
        j+=1
    return True

print("Enter value ")
value =int(input())
i=2
while i < value:
    if (IsPrimeNumber(i) and value % i == 0):
        print (i)
    i+=1
