import math
a = int(input("Enter the value of a :"))
b = int(input("Enter the value of b :"))
c = int(input("Enter the value of c :"))
d = b * b - 4 * a *c
if d < 0:
	print "Imaginary roots."

else:
	root1 = (-b + math.sqrt(d)) / (2.0 * a)
	root2 = (-b - math.sqrt(d)) / (2.0 * a)

print ("The roots of the equation are %f and %f" % (root1, root2))
# print ("Root 1 = %f" % root1)
# print ("Root 2 = %f" % root2)
