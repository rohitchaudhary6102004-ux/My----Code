

class Employee:
    language = "python"  # thia is classs attribute
    salary = 120000
    
Rohit = Employee()
Rohit.name = "Rohit"  # this is a instance attribute
print(Rohit.name, Rohit.language, Rohit.salary)    

rohan = Employee()
rohan.name = "Issu"
print(rohan.name, rohan.salary)

# Here name is instance attribute and salary anad language are class attribute as they are directly belong to the class 