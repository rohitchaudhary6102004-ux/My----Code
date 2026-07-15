# Write a program to find out whether a student has passed or failed if it requires a total of 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as in input from the user.
math = int(input("Enter Math marks : "))
chemistry = int(input("Enter Chemistry marks : "))
physics = int(input("Enter Physics marks : "))

if (math >= 33 and chemistry >= 33 and physics >= 33):
    if ((math+physics+chemistry)/3 >= 40):
         print("Passed")
    else:
       print("Failed")      
else:
    print("Failed") 
