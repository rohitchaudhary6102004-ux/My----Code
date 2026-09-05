# Write a recursive function to calculate the sum of list of first n natural numbers .
def sum(n):
     if (n==1):
         return 1
     return n + sum(n-1)

n = int(input("Enter the Number : "))
print(f"The Sum of Number is : {sum(n)}")