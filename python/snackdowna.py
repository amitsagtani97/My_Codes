import sys
for _ in range(int(sys.stdin.readline())):
	n = int(sys.stdin.readline())
	x = int(n/2)
	heights = list(map(int, sys.stdin.readline().split()))
	if n%2!=0:
		a = list(range(1, x+1))
		b = list(range(x, 0, -1))
		a.extend(b)
		a.insert(x, x+1)
		ans = 0
		for y in range(n):
			ans += (heights[y]-a[y])
		print(ans)		
	else:
		a = list(range(1, x+1))
		b = list(range(x, 0, -1))
		a.extend(b)
		a.insert(x, x+1)
		ans = 0
		t1 = a[:]
		t1.insert(0,0)
		t2 = a[:]
		t2.insert(n-1, 0)
		ans1, ans2 = 0,0
		a1 = heights[0]
		heights[0] = 0
		for y in range(n):
			ans1 += (heights[y]-t1[y])
		heights[0] = a1
		a2 = heights[n-1]
		heights[n-1] = 0
		for y in range(n):
			ans2 += (heights[y]-t2[y])
		ans1 += a1
		ans2 += a2
		print(abs(min(ans1, ans2)))