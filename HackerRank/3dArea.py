# Enter your code here. Read input from STDIN. Print output to STDOUT
import atexit
import io
import sys
import math
buff = io.BytesIO()
sys.stdout = buff
     
@atexit.register
def write():
    sys.__stdout__.write(buff.getvalue())

a = []
ans = 0
row, col = [int(x) for x in raw_input().split()]
for i in xrange(row):
    data = list(map(int, raw_input().split()))
    for j in data:
        if j==1:
            ans+=6
        else:
            ans+= (j*4)+2
    a.append(data)
# print(a)
# print(ans)
if row==1 and col==1:
    print(ans)
elif row==1:
    for i in xrange(1, col):
        ans-= 2*min(a[0][i],a[0][i-1])
    print(ans)
elif col==1:
    for i in xrange(1,row):
        ans-=2*min(a[i][0], a[i-1][0])
    print(ans)
else:
    for i in xrange(row):
        for j in xrange(col):
            if i==0 and j==0:
                if a[0][1] > a[0][0]:
                   ans-=a[0][0]
                else:
                    ans-=a[0][1]
                if(a[1][0] > a[0][0]):
                    ans-=a[0][0]
                else:
                    ans-=a[1][0]
            elif i==row-1 and j==0:
                if(a[row-2][0] > a[row-1][0]):
                   ans-=a[row-1][0]
                else:
                    ans-=a[row-2][0]
                if(a[row-1][1] > a[row-1][0]):
                    ans-=a[row-1][0]
                else:
                    ans-=a[row-1][1]
            elif i==row-1 and j==col-1:
                if(a[row-1][col-2] > a[row-1][col-1]):
                    ans-=a[row-1][col-1]
                else:
                    ans-=a[row-1][col-2]
                if(a[row-2][col-1] > a[i][j]):
                    ans-=a[i][j]
                else:
                    ans-=a[row-2][col-1]
            elif i==0 and j==col-1:
                if(a[0][col-2]>a[i][j]):
                    ans-=a[i][j]
                else:
                    ans-=a[0][col-2]
                if(a[1][col-1]>a[i][j]):
                    ans-=a[i][j]
                else:
                    ans-=a[1][col-1]

            elif i==0:
                if(a[i+1][j] > a[i][j]):
                    ans-= a[i][j]
                else:
                    ans-=a[i+1][j]
                ans-=min(a[i][j+1],a[i][j])
                ans-=min(a[i][j-1], a[i][j])

            elif i==row-1:
                if(a[row-2][j]>a[i][j]):
                    ans-=a[i][j]
                else:
                    ans-=a[row-2][j]
                ans-=min(a[i][j-1],a[i][j])
                ans-=min(a[i][j+1],a[i][j])
            elif j==0:
                if(a[i][1]>a[i][j]):
                    ans-=a[i][j]
                else:
                    ans-=a[i][1]
                ans-=min(a[i-1][j], a[i][j])
                ans-=min(a[i+1][j], a[i][j])
            elif j==col-1:
                if(a[i][col-2]>a[i][j]):
                    ans-=a[i][j]
                else:
                    ans-=a[i][col-2]
                ans-=min(a[i-1][j], a[i][j])
                ans-=min(a[i+1][j], a[i][j])
            else:
                if(a[i][j+1]>a[i][j]):
                    ans-=a[i][j]
                else:
                    ans-=a[i][j+1]
                if(a[i-1][j]>a[i][j]):
                    ans-=a[i][j]
                else:
                    ans-=a[i-1][j]
                if(a[i][j-1] > a[i][j]):
                    ans-=a[i][j]
                else:
                    ans-=a[i][j-1]
                if(a[i+1][j] > a[i][j]):
                    ans-=a[i][j]
                else:
                    ans-=a[i+1][j]
    print(ans)



