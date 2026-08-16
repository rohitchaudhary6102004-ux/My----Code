# Write a program to find out whether a given post is about "Rohit" or not 
post = input("Enter the post : ")

if ( "Rohit".lower() in post.lower()):
    print("This post is talking about Rohit.")
else:
    print("This post is not talking about Rohit.")    