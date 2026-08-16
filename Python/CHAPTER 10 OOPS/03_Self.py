

class Employee:
    
    def getInfo(self): # Positional Arguments
        language = "Python"
        salary = 120000
        print(f"The language is {language}. The salary is {salary}.")
    
    def greet(self, name):
        print(f"Good Morning, {name}")    
        
rohit = Employee()
rohit.getInfo()     #   TypeError: Employee.getInfo() takes 0 positional arguments but 1 was given ..so to resolve this problem we use self .
# rohit.getInfo() behaves as  Employee.getInfo(rohit) that why we have error that getInfo() functio takes 0 positional arguments but we are sending rohit from getInfo() function.
# rohit.name = "Rohit"
rohit.greet("Rohit")