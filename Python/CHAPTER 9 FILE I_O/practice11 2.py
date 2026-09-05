# Write a python program to rename a file to "renamed_by_python.txt".

with open("file.txt") as f:
    content = f.read()

with open("file_renamed_by_python", "w") as f:
    f.write(content)    