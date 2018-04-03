import atexit
import io
import sys
import math
buff = io.BytesIO()
sys.stdout = buff
     
@atexit.register
 
def write():
 	sys.__stdout__.write(buff.getvalue())
 
for _ in xrange(int(input())):
	n, p = [int(x) for x in raw_input().split()]
	ans = []
	if n <= 2:
		print("impossible")
		continue
	if n%p != 0 or p>n:
		print("impossible")
		continue
	if p%2 != 0:
		for i in xrange(p):
			if i%2 == 0:
				ans.append('a')
			else:
				ans.append('b')
	#print(ans)
	else:
		for i in xrange(0, (p/2)):
			if i%2 == 0:
				ans.append('a')
			else:
				ans.append('b')
		for i in range(p/2, p):
			if i%2 == 0:
				ans.append('b')
			else:
				ans.append('a')
	#print(ans)
	ans = ["".join(ans)]*(n/p)
	ans = ("".join(ans))
	#print(ans)
	if len(set(ans)) == 1:
		print("impossible")
	else:
		print(ans)

	# if p == n:
	# 	print("".join(ans))
	# 	continue

	# # else:
	# # 	for i in xrange(p, n):
	# # 		ans[i] = ans[i-p]
	# if ans[:] == ans[-1::-1]:
	# 	if len(set(ans))==2:
	# 		print("".join(ans))
	# 	else:
	# 		print("impossible")
	# else:
	# 	print("impossible")