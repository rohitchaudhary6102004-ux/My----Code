# Create an empty dictionary. Allow 4 friends to enter their favourite language as values and use keys as their names . Assume that the names are unique
dictionary = {
    
}
name1 = input("Enter your Name : ")
language1 = input("Enter your Language : ")
# dictionary.update({name1:language1})
dictionary[name1] = language1

name2 = input("Enter your Name : ")
language2 = input("Enter your Language : ")
# dictionary.update({name2:language2})
dictionary[name2] = language2

name3 = input("Enter your Name : ")
language3 = input("Enter your Language : ")
# dictionary.update({name3:language3})
dictionary[name3] = language3

name4 = input("Enter your Name : ")
language4 = input("Enter your Language : ")
# dictionary.update({name4:language4})
dictionary[name4] = language4

print(dictionary)
