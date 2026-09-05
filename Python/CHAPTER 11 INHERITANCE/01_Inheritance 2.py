class Employee:
    company = "ITC"
    def show(self):
        print(f"The name is {self.name} and the salary is {self.salary}")
        
class Programmer(Employee):
    company = "InfoTech"
    def show(self):
        print(f"The name is {self.name} and the salary is {self.salary}")
    
    def showLanguage(self):
        print(f"The name is {self.name} and he is good at {self.language} language")    
        
        
a = Employee()
b = Programmer()

print(a.company, b.company)
# a.show()      
          
            # Types of inheritance:          
            #    Single Inheritance
            #    Multiple Inheritance
            #    Multilevel Inheritance