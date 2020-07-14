for i in range(4):
    for j in range(4):
        if j<3-i:
            print("",end="\t")
        else:
            print((i+j)*(i+j),end="\t")
    print()
