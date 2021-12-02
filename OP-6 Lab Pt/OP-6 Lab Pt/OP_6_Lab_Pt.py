import math
def FunctionF(x,y):
    return pow(x, 2) - pow(y, 2)

def FunctionG(x,y,z):
    return (x + y) / (4 * z * x)

def FunctionY(a,b,c,d):
    t=FunctionG(a, b, c)
    return (FunctionF(a, b) + FunctionF(c, d)) / math.sqrt(FunctionG(a, b, c)) + (c - FunctionG(a, b, c) + 1) / (FunctionF(b, c) - FunctionF(a, b)) * (1 + math.sqrt(FunctionG(a, b, c) )/ (FunctionF(b, c) - FunctionF(a, c)))
print("Enter a")
a = int( input());
print("Enter b")
b = int( input());
print("Enter c")
c = int( input());
print("Enter d")
d = int( input());
i=FunctionY(a,b,c,d)
print (i)
