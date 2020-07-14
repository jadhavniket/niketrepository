while(1):
    x=int(input("Enter number: "))
    for i in range(x+1):
        if i%5==0:
            continue
        print(i)
    break
