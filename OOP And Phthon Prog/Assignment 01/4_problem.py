def solve(arr):
    count = 0
    all_even = True

    for x in arr:
        if x % 2 != 0:
            all_even = False
            break

    if all_even:
        for i in range(len(arr)):
            arr[i] = arr[i] // 2
        count += 1

    return count

num = int(input())
arr = list(map(int, input().split()))

result = solve(arr)
print(result)
