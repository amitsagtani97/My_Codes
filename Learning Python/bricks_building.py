import math
for _ in range(int(input())):
    n = input()
    ans = 0
    data1 = list(map(int, input().split()))
    data = []
    for i in data1:
        if i%2==0:
            data.append(i)
    for i in data:
        if(int(math.log(i, 2)) == math.log(i, 2)):
            ans += int(math.log(i, 2))
        else:
            while(i%2==0):
                i = i/2
                ans += 1
    if(ans%2 == 0):
        print("Alan")
    else:
        print("Charlie")