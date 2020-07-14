def fun(a,b):
    def gun(x,y):
        nonlocal a,b
        print("ingun")
        print(a)
        print(b)
        a=a+1
        b=b+1
        print(x)
        print(y)
        return a,b
    retGun=gun(8,10)
    x=x+1
    y=y+1
    return retGun
retFun=fun(4,7)
for i in retFun:
    print(i)
