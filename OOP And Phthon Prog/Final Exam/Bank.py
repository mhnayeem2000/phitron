class Info:
    def __init__(self,name):
        self.name = name
        print(f"Hei {self.name} Welcome to My Bank.com")
        print("1. I have Already an Account")
        print("2. I am new Here")

class create_account(Info):
    def __init__(self, name,email,address,account_type):
        self.name = name
        self.email = email
        self.account_type = account_type
        self.address = address
        super().__init__(name)
    def __repr__(self) -> str:
        return(f"Name is : {self.name} \nUser Email : {self.email} \nUser Address : {self.address} \nAccount Type : {self.account_type}")    
        


name = input("Enter your  name : ")        
nayeem = Info(name)
schoices = input("Enter Your Choice:")
if schoices == "1":
    print("Use your name and password to Login")
else:
    email = input("Enter your email address: ")
    address = input("Enter your address: ")
    account_Type = input("Enter your Account Type: ")
    person1 = create_account(name,email,address,account_Type)
    print(person1) 
