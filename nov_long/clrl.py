import atexit
import io
import sys
import math
buff = io.BytesIO()
sys.stdout = buff
     
@atexit.register
def write():
 	sys.__stdout__.write(buff.getvalue())


for _ in xrange(input()):
	n, r = [int(x) for x in raw_input().split()]
	data = list(map(int, raw_input().split()))
	j = 0
	k = 0
	a = [10e9]
	if n <= 2:
		print("YES")
	else:
		for i in xrange(n-1):
			if data[i] > r:
				if data[i+1] == r:
					print("YES")
					break
				a.insert(0, data[i])
				#k = 0
				#a.insert(0, i)
			elif data[i] < r:
				if data[i+1] > a[0]:
					print("NO")
					break
				elif data[i+1]==r:
					print("YES")
					break
				

