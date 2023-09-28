word = input()
rcount = 0
lcount = 0
wordtrack = 0 
start =0
count = 0
while wordtrack < len(word):
    if word[wordtrack] =='L':
        lcount += 1
    if word[wordtrack] == 'R':
        rcount += 1
    if lcount == rcount :
        count += 1
        for i in range(start,wordtrack+1):
            print(word[i],end='')
        print()  
        start = rcount + lcount
        rcount = lcount = 0   
    wordtrack=wordtrack+1 
print(count)
      