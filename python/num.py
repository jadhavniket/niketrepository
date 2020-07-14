num=list(input("Enter number: "))
for i in range(2,num):
    if (int(num%i==0)):
        print("not prime")
        break
else:
    print("prime")
