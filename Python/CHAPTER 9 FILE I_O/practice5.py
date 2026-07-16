# Repeat a program 4 for a list of such words to be censored.

words = ["Donkey", "bad", "bhai"]

with open("file2.txt") as f:
    content = f.read()
    

for word in words:    
    content = content.lower().replace(word.lower(), "#"*len(word))
with open("file2.txt", "w") as f:
       f.write(content)    