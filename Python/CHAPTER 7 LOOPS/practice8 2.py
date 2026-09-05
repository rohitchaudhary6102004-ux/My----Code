# Write a prgram to print the following star pattern.
# *
# * * *
# * * * * *
# for n = 3

n = int(input("Enter ypur Number : "))

for i in range(1, (n+1)):
    print("* " * (2*i-1))
    
#     *
#    ***
#   *****

for i in range (1,n+1):
    print(" "*(n-i) + "*"*(2*i-1))