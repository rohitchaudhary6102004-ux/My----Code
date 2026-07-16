# Write a program to read the text from a given file 'poems.txt' and find out whether it contains the word 'twinkle'.

poem = '''Twinkle, twinkle, little star,
How I wonder what you are!
Up above the world so high,
Like a diamond in the sky.

When the blazing sun is gone,
When he nothing shines upon,
Then you show your little light,
Twinkle, twinkle, all the night.

Then the traveler in the dark
Thanks you for your tiny spark,
How could he see where to go,
If you did not twinkle so?

In the dark blue sky you keep,
Often through my curtains peep
For you never shut your eye,
Till the sun is in the sky.

As your bright and tiny spark
Lights the traveler in the dark,
Though I know not what you are,
Twinkle, twinkle, little star.'''

with open("mypoem.txt", "w") as f:
    f.write(poem)


with open("mypoem.txt") as f:
    data = f.read()
    
word = input("Enter your Word : ").lower()    
if word in data.lower():
    print("Found")
    print(f"{word.capitalize()} occurred {data.lower().count(word)} times")
else:
    print("Not Found")    
    