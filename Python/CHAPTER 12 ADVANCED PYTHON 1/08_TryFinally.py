def main():
    try:
         a = int(input("Enter Your Number : "))
         print("Your Number is :", a)
    
    except ValueError:
        #  print("Enter a Valid Number")   
         print("Please Enter digits only") 
         return
    
    else:
        print("Yes you Enter Valid Number")
    
    finally:    
         print("Thank You, Please Visit again")
    
    print("Hey Code is Working")     
         
main()         


        # But we no use finally in function and use return after the block of code then the below print does not  work if it is not inside the finally.And finally execute everytime even if return or exception occurs.