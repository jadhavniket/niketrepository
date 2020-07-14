test_list=[]
alpha='a'
for i in range(0,26):
    test_list.append(alpha)
    alpha=chr(ord(alpha)+1)
print(test_list)
