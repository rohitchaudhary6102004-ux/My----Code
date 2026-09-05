f = open("file.txt")
print(f.read())
f.close()

# Same can be done with the help of with statement withoust using any closeing statement.

with open("file.txt") as f:
    print(f.read())