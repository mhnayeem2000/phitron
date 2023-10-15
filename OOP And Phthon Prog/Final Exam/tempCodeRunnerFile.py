class Info:
    all_accounts = []

    def __init__(self):
        pass
    
    def get_choice(self):
        print("============= Welcome To OUR Bank ================= \n")
        schoices = input("1. Existing account\n2. Create New account\nEnter Your Choice: ")
        if schoices == "1":
            print("Use your name and password to Login")
            # Add logic for login here
        elif schoices == "2":
            self.create_account()
        else:
            print("Invalid choice. Please try again.")

    def create_account(self):
        name = input("Enter your name: ")
        email = input("Enter your email address: ")
        address = input("Enter your address: ")
        account_type = input("Enter your Account Type: ")
        person1 = CreateAccount(name, email, address, account_type)
        print(person1)
        Info.all_accounts.append(person1)
        length = len(Info.all_accounts)
        self.account_number = f"{name.lower()}{100+length}"
        print("Account Number: " + self.account_number)
        print(f"Total accounts: {length}")

        # Provide options for deposit and withdrawal
        print("\nChoose an option:")
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Check Balance")
        print("4. Transfer Amount")
        choice = input("Enter your choice: ")

        if choice == "1":
            amount = float(input("Enter the deposit amount: "))
            person1.deposit(amount)
        elif choice == "2":
            amount = float(input("Enter the withdrawal amount: "))
            person1.withdraw(amount)
        elif choice == "3":
            person1.get_balance()
        elif choice == "4":
            self.transfer_amount()
        else:
            print("Invalid choice.")

    def transfer_amount(self):
        sender_name = input("Enter your name: ")
        receiver_name = input("Enter the receiver's name: ")
        amount = float(input("Enter the amount to transfer: "))

        sender = None
        receiver = None

        # Find sender and receiver accounts
        for account in Info.all_accounts:
            if account.name == sender_name:
                sender = account
            elif account.name == receiver_name:
                receiver = account

        if sender is None or receiver is None:
            print("Sender or receiver account does not exist.")
            return

        sender.withdraw(amount)
        receiver.deposit(amount)
        print(f"Successfully transferred {amount} from {sender_name} to {receiver_name}.")


class CreateAccount:
    def __init__(self, name, email, address, account_type):
        self.name = name
        self.email = email
        self.account_type = account_type
        self.address = address
        self.balance = 0

    def __repr__(self) -> str:
        return f"User Name: {self.name}\nUser Email: {self.email}\nUser Address: {self.address}\nAccount Type: {self.account_type}"

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            print(f"Deposited {amount} into the account. Current balance: {self.balance}")
        else:
            print("Invalid deposit amount.")

    def withdraw(self, amount):
        if amount > 0:
            if amount <= self.balance:
                self.balance -= amount
                print(f"Withdrawn {amount} from the account. Current balance: {self.balance}")
            else:
                print("Withdrawal amount exceeded. Insufficient balance.")
        else:
            print("Invalid withdrawal amount.")

    def get_balance(self):
        print("Available balance:", self.balance)


nayeem = Info()
nayeem.get_choice()
