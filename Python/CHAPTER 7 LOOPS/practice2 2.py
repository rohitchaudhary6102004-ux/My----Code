# Write a program to greet all the person names stored in the list and which starts with s
list = ["Rohit", "Sneha","Shalini", "Neha"]

for i in range (len(list)):
    if (list[i].startswith("S")):
        print("Love You", list[i])