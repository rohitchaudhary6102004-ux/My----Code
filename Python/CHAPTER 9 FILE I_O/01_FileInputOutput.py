# A random access memory is volatile , and all its content are lost once a program terminate in order to persist the data forever, we use files.
# A file is data stored device . A python program can talk to the file by reading content from it and writing content to it.
# There are two types of files :
# (i). Text files(.txt, .c etc)
# (ii). Binary files (.jpg, .dat, etc)


# Help of python we can raed write and delete files 
import os

f = open("file.txt")
data = f.read()
print(data)
print(os.getcwd())
print(os.listdir())
f.close()

file = open("file.txt")
lines = file.readlines()
print(lines, type(lines)) 
file.close()
