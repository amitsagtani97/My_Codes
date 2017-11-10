rows = int(input("Enter the number of rows : "))
i = 1
s = '*'
while i <= rows :
	print ("%(rows)c" % s * i)
