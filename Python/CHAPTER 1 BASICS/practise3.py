import os

# Specify the directory you want to list
directory_path = '/Applications'

# List all the files and directories in the specified path
contents = os.listdir(directory_path)

# Print each file and directory name
print(contents)