class bank:
    def __init__(self,name):
        self.name = name
        self.__balance = 100
    def deposite(self,amount):
        self.amount = amount
        self.__balance = self.__balance + self.amount
        print("Account Holder :",self.name)
        print("Your Current Balance is :",self.__balance)
nm = input("Enter Your Name:")
taka = int(input("Enter Deposit Amount:"))        
p1 = bank(nm)   
p1.deposite(taka)