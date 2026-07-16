# Write a program using functions to find greatest of three numbers.

def greatest(a, b, c):
    if( a>b and a>c):
        return a
    if( b>a and b>c):
        return b
    else:
        return c
    
a = int(input("Enter your Number : "))    
b = int(input("Enter your Number : "))    
c = int(input("Enter your Number : "))    

print(f"The greatest number is : {greatest(a, b, c)}")