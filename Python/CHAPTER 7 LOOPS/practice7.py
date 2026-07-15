# Write a program to print the following star patterns
#     *
#     * *  
#     * * *

n = int(input("Enter your Number : "))
for i in range (1, (n+1)):
    print("* " * i)
    
#     *
#    * *
#   * * *
#  * * * *

for i in range(1,(n+1)):
    print(" " * (n-i) + " * " * i)