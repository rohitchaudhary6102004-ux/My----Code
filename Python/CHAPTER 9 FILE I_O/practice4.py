# A file contains a word "Donkey" multiple times .You need to wite a program which replace this word with #### by updating the same.
with open("file1.txt") as f:
    content = f.read()
    
contentNew = content.lower().replace("Donkey".lower(), "######")
    
with open("file1.txt", "w") as f:
    f.write(contentNew)    