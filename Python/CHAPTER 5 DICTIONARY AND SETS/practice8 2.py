# If languages of two friends are same ; what will happen to the program in problem 6
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

# With the same language of two friends there no such problem beacuse in dictionary the key should be the different but we can have the same values