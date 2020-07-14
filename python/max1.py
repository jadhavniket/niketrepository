my_set1={1,2,3}
my_set2={4,5,6}
i1=iter(my_set1)
i2=iter(my_set2)
for i in range(len(my_set1)):
    print(next(i1)+next(i2))
