# Create a class "Programmer" for storing information of few programmers working at Microsoft. 

class programmer:
    company = "MicroSoft"
    def __init__(self, name, salary, pincode):
        self.name = name
        self.salary = salary
        self.pincode = pincode
        pass
    
p = programmer("Rohit", 120000, 202141)
print(p.name, p.salary, p.pincode, p.company)
