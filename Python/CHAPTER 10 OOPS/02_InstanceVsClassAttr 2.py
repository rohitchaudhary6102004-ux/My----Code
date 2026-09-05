

class Employee:
    language = "python"  # thia is classs attribute
    salary = 120000
    
Rohit = Employee()
Rohit.name = "Rohit"  # this is a instance attribute
print(Rohit.name, Rohit.language, Rohit.salary)    

rohan = Employee()
rohan.language = "JavaScript"
print(rohan.language, rohan.salary)

# Inheritance object have more priority than the class attribute during assignment and retrieval.