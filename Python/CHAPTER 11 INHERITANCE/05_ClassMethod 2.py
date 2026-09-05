class Employee:
    a = 1
    
    @classmethod
    def show(cls): # We use 'cls' here instead of 'self' for class method
        print(f"The Class attribute of a is {cls.a}")
        
e = Employee()
e.a = 45

e.show()        