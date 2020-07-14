num=int(input("Enter numbers:"))
rem=0
sum=0
while num!=0:
    rem=num%10
    num=int(num/10)
    for i in range(0,rem):
        sum=sum+rem
    print(rem)
