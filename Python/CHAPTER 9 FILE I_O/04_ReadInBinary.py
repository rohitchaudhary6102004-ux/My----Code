str = "Hey Rohit how are you and you are amazing"

f = open("myfile.txt", "rb")
data = f.read()
print(data, type(data))
print(list(data))
f.close()
