# Create a class with a class attribute a; create a object from it and set 'a' directly using object a = 0 . Does this change the class attribute.

class Demo:
    a = 4
    
o = Demo()
print(o.a) # Prints the class attribute 
o.a = 0 # Set the instance attribute
print(o.a) # Print the instance attribute
print(Demo.a)  # Therfore it does not change the class atrributes. 