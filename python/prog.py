"""
1.
x = 1
y = 0
if x or y:
    print("inside if")
print("out of if")

2.
x = 1
y = 0
if x and y:
    print("Inside if")
print("out of if")

3.
x = 5000
if x<10000:
    print("Normal lifestyle")

4.
recetion = False    #True
if recetion:
    print("Hatt")
else:
    print("nko jau re")
print("Out of if else")
"""

c_name = input("Enter name Google/Persistent ::")
if c_name == "Google":
    print("No hiring")
elif c_name == "Persistent":
    print("On hold")
else:
    print("Not found")
