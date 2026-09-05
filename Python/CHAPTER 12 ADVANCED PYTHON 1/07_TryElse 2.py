try:
    a = int(input("Enter Your Number : "))
    print("Your Number is :", a)
    
except ValueError:
    print("Enter a Valid Number")   
    print("Please Enter digits only") 
    
else:    
    print("Thank You, Please Visit again")
    
    # When we successfully run the try then only else will execute..and if error will run then the else case will not execute.
    