test = int(input())
for i in range(0,test):
    n = input()
    lst = n.split()
    rev = list(reversed(lst))
    if lst == rev :
        print("YES")
        break
    else : 
        print("NO")
        break