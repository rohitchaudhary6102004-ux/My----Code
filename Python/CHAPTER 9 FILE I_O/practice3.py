# Write a program to generate multiplication table from 2 to 20 and write it to the different files. Place these files in a folder for a 13-year old.


def table(n):
    index = ""
    for i in range(1,11):
        index += f"{n} X {i} = {n*i} " + "\n"
        print(index) 
    print("\n")
    with open(f"Tables/Table{n}.txt", "w") as f:
         f.write(index) 



for i in range(2, 21):
    table(i)
for i in range(2, 21):
    table(i)