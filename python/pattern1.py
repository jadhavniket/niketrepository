ch='A'
for i in range(4):
    for j in range(4):
        if j<3-i:
            print(" ",end="")
        else:
            print(ch,end="")
            ch=chr(ord(ch)-1)
       #     ch=chr(ord(ch)-1)
    print()
    ch=chr(ord('A')+i+1)
