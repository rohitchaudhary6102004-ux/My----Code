# Can you change the self-parameters inside a class to something else (say "Rohit"). Try changing self to "slf" or "rohit" and see the effects.
from random import randint
class Train:
    def __init__(slf, trainNo):
        slf.trainNo = trainNo
    def bookTicket(rohit, fro, to):
        print(f"Ticket is booked in Train No. : {rohit.trainNo} from {fro} to {to}")
    
    def getStatus(self):
        print(f"Train {self.trainNo} is Running on Time")
    
    def getFare(self, fro, to):
        print(f"Ticket Fare in Train No. : {self.trainNo} from {fro} to {to} is : {randint(500, 1500)}")
    
a = Train(202141)
a.bookTicket("Aligarh", "Delhi")
a.getFare("Aligarh", "Delhi")
a.getStatus()

# Therfore we can replace shelf with "slf" or "rohit" or any word but in python professional way is self.