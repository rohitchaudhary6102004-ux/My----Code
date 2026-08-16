# Write a program to create a dictionary of Hindi words with values as their English translation. Provides user with an option to took it up!

dictionary = {
    "sona":"sleep",
    "jagna":"awake",
    "khana":"eat",
    "peena":"drink"
}

word = input("Enter your Word : ")
print(dictionary.get(word))