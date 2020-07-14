ch='A'
for i in range(4):
    for j in range(4-i):
        print(ch,end=" ")
        ch=chr(ord(ch)+1)
    print()
    #ch='A'
