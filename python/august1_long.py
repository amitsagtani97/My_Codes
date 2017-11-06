from sys import stdin, stdout

def main():
	T = int(input())
	for _ in range(T):
		n = int(input())
		data = list(map(int, input().split()))
		if (n%2==0):
			mid = int(n/2)
			a = data[0:mid]
			b = data[mid:]
			b = b[::-1]
			#print(a)
			#print(b)
			if(a[-1]==7 and a==b):
				print("yes")
			else:
				print("no")
		else:
			mid = int(n/2)
			a = data[0:mid]
			b = data[mid+1:]
			b = b[::-1]
			#print(a)
			#print(b)
			if(data[mid]==7 and a==b):
				print("yes")
			else:
				print("no")



if __name__ == '__main__':
	main()
