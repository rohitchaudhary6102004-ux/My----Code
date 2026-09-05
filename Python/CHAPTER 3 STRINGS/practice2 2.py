# Write a program to fill in a letter template given below with name and date
letter = '''
            Dear <|Name|>,
            Your Date Of Birth!
            <|Date|>
            '''
name = input("Enter your Name : ")
# date = input("Enter Date : ")

print(letter.replace("<|Name|>", name).replace("<|Date|>", "6th October 2004"))