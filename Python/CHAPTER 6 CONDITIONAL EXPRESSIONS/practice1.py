# Write a program to find the greatest of four numbers entered by the user.

a = int(input("Enter number : "))
b = int(input("Enter number : "))
c = int(input("Enter number : "))
d = int(input("Enter number : "))

if( a>b and a>c and a>d):
    print(a, "is the greatest")
if( b>a and b>c and b>d):
    print(b, "is the greatest")
if( c>b and c>a and c>d):
    print(c, "is the greatest")
if( d>b and d>c and d>a):
    print(d, "is the greatest")