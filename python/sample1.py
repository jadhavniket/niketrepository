num=int(input())
l=[]
while num>0:
    u=num%10
    l.append(u)
    num=int(num/10)
print(l)
