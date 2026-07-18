try:
    a = int(input("Enter Your Number : "))
    print("Your Number is :", a)
    
except ValueError:
    print("Enter a Valid Number")   
    print("Please Enter digits only") 
    
    
print("Thank You, Please Visit again")

try:

    a = int(input("Enter the Number : "))
    b = int(input("Enter the Number : "))

    print(f"The division is {a/b}")
    
except ZeroDivisionError:
    print("We cannot divide any Number by Zero")    