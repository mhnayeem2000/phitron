def solve(arr):
    count = 0
    all_even = all(x % 2 == 0 for x in arr)
    if all_even:

        for i in range(len(arr)):
            arr[i] = arr[i] // 2
        count += 1

    return count


num = int(input())
arr = list(map(int, input().split()))

result = solve(arr)
print(result)
