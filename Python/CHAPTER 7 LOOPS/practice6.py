# Write a program to calculatre a factorial of a given number using for loop.
n = int(input("Enter your Number : "))
factorial = 1
for i in range(1, (n+1)):
     factorial = factorial * i
     
print("Factorial of Number is :", factorial)     
     