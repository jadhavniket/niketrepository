num=input()
l=[]
for i in range(num):
    u=num%10
    l.append(u)
    num=str(num//10)
print(l)
