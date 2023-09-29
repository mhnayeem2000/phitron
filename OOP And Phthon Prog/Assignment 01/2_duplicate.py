N = int(1e7) + 5
frequency = [0] * N

n = int(input())
numbers = list(map(int, input().split()))
#print(numbers)
for x in numbers:
    frequency[x] += 1
cnt = 0

for i in range(1, N):
    if frequency[i] >= i:
        cnt += frequency[i] - i
    else:
        cnt += frequency[i]

print(cnt)
