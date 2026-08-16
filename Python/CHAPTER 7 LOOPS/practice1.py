# Write a program to print a multiplication table using loops.

table = int(input("Enter the number : "))

for i in range (1, 11):
    print(table * i)


for i in range (1, 11):
    print(f"{table} X {i} = {table * i}")    