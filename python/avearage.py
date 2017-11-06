a = int(input("Enter the no. of studentd : "))
b = a
sum = 0.0
while a > 0 :
	number = int(input("Enter the marks of student %d :" % (a)))
	sum = sum + number
	a = a-1

print sum/b