test = int(input())
for x in range(0,test):
    st = input()
    l = len(st)
    resutl = ''
    for i in range(l-1,-1,-1):
        result += st[i]
print(resutl)
