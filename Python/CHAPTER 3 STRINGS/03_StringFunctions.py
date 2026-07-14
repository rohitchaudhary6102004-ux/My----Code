name = "Rohit"

# len function which gives the length of function
print(len(name))

# .endswith functions 
print(name.endswith("hit")) # Gives True or False
print(name.endswith("iit")) # Give False as name does not ends with iit

# .startswith function
print(name.startswith("Roh")) # gives True
print(name.startswith("roh")) # gives False

# .capitalize this function capitalize the only very first letter of the string
name1 = "rohit"
print(name1.capitalize()) # gives "Rohit" as it capitalize the first letter of the string

# .upper function
print(name1.upper()) # gives "ROHIT"

# .lower function
name2 ="ROHIT"
print(name2.lower())

# .title function it capitalize the first letter of every word of string
name3 = "hello rohit chaudhary what are you doing and whats up"
print(name3.title())

# .find(word) function this function finds the word in the string 
print(name3.find("z")) # it gives -1 if not present and it gives the index where it present 
print(name3.find("y"))

# .replace function in which we can replace old word with the new word
name4 = "hello world"
print(name4.replace("d", "s"))
print(name4.replace("world", "python"))

s = "Rohit is a very good good boy "
print(s.replace("good", "bad"))