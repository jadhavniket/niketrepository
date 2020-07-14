#count=int(input("Enter number of +ve cases:"))

while(1):
    count=int(input("Enter number of +ve cases:"))
    if count<100:
        print("lockdown ended")
        break
    elif count==100:
        print("Lockdown almost ending")
    else:
        print("Lockdown continue")
