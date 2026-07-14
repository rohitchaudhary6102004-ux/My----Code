# Write a program to sum a list with 4 numbers

list = []

l1 = int(input("Enter a Number : "))
list.append(l1)
l2 = int(input("Enter a Number : "))
list.append(l2)
l3 = int(input("Enter a Number : "))
list.append(l3)
l4 = int(input("Enter a Number : "))
list.append(l4)

print(list)
print("Sum of Elements of List : " + str(list[0] + list[1] + list[2] + list[3]))
print(sum(list))
print("Sum of Elements of List : " + str(sum(list)))