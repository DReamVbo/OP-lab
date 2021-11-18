import math
def CalculateFactorial(value):
	result = 1
	i=1
	while  i <= value:
		result = result * i
		i+=1
	return result;

definition = float (pow(10, -4));
x=0
while  x <= 4 :
	n = 0
	current = float (0)
	previos = float (0)
	result = float (0)
	while current-previos> definition or n==0:
		previos = current
		current = pow(-1, n) * pow(x, 2 * n) / CalculateFactorial(2 * n)
		result += current
		n+=1
	print  ("X = " + str(x) + " summ = " + str(result)+"\n")
	x+=1
