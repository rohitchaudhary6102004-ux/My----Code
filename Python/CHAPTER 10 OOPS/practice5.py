# Write a class Train which has methods to book a ticket, get status (no of seats) and get free information of train running under Indian Railways.
from random import randint
class Train:
    def __init__(self, trainNo):
        self.trainNo = trainNo
    def bookTicket(self, fro, to):
        print(f"Ticket is booked in Train No. : {self.trainNo} from {fro} to {to}")
    
    def getStatus(self):
        print(f"Train {self.trainNo} is Running on Time")
    
    def getFare(self, fro, to):
        print(f"Ticket Fare in Train No. : {self.trainNo} from {fro} to {to} is : {randint(500, 1500)}")
    
a = Train(202141)
a.bookTicket("Aligarh", "Delhi")
a.getFare("Aligarh", "Delhi")
a.getStatus()