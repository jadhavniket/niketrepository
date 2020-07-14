hrs=int(input("Enter hours:"))
rate=float(input("Enter rate:"))
pay=hrs*rate
if hrs<=40:
    print(pay)
elif hrs>40:
    print(40*rate+(hrs-40)*1.5*rate)

