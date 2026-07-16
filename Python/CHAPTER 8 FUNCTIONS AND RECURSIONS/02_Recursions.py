# Recursion are function which calls itshelf.
# factorial(n) = n * factorial(n-1)

def factorial(n):
    if ( n == 1):
        return 1
    return n * factorial(n-1)

number = int(input("Enter your Number : "))
print(f"Factorial of {number} is : {factorial(number)}")