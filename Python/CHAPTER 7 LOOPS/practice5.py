# Write a program to find the sum of first n natural numbers using while loop
n = int(input("Enter the Number : "))
sum = 0
i = 1
while ( i < (n+1)):
    sum = sum + i
    i += 1

print("Sum of first n natural number is : ", sum)    