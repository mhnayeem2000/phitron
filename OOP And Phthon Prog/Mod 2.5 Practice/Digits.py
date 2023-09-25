test = int(input())
for x in range(0,test):
    s =  input()
    result = ''
    for i in range(len(s)-1,-1,-1):
        result += s[i] + ' '
    print(result)    