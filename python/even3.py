num1=int(input("Enter no1: "))
num2=int(input("Enter no2: "))
num3=int(input("Enter no3: "))
if num1>num2 and num1>num3:
    print(num1,"is greater")
elif num2>num1 and num2>num3:
    print(num2,"is greater")
elif num3>num1 and num3>num2:
    print(num3,"is greater")
else:
    print("All are same")
