class Employee:
    a = 1
    
    @classmethod
    def show(cls): # We use 'cls' here instead of 'self' for class method
        print(f"The Class attribute of a is {cls.a}")
    
        
    @property    # Getter
    def name(self):
        return f"{self.fname} {self.lname}"
    
        
    @name.setter # Setter
    def name (self, value):
        self.fname = value.split(" ")[0]
        self.lname = value.split(" ")[1]
        
        
        
e = Employee()
e.a = 45

e.name = "Rohit Chaudhary"
print(e.fname, e.lname)
print(e.fname)
print(e.name)

e.show()        