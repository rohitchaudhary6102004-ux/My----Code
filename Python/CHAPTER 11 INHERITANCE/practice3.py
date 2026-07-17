# Create a class Employee and add salary and icrement properties to it.
# Write a method 'salaryAfterIncrement' method with a @property decorator which changes the value of salary based on the increment.
from random import randint
class Employee:
    salary = 40000
    increment = randint(10, 20)

    @property # After using the property on the method it doesn't the method anymore it become now property.
    def salaryAfterIncrement(self):
        return self.salary + (self.salary * self.increment /100)



e = Employee()
# print(e.salaryAfterIncrement()) # If you call the methos by this way it will give you an error like "Float object is not callable".
print(f"The New Salary is : {e.salaryAfterIncrement}")