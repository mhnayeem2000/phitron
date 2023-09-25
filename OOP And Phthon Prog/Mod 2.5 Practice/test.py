test = int(input())
for k in range(0,1):
    num1, num2 = map(int, input().split())
    sum1 = 0
    sum2 = 0
    if num1 > num2:
        for i in range(num2, num1, 1):
            if i % 2 == 1:
                sum1 += i
    elif num2 > num1:
        for i in range(num1, num2, 1):
            if i % 2 == 1:
                sum2 += i

    if num1 > num2:
        print(sum1)
    else:
        print(sum2)
