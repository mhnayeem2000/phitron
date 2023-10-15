class CreateAccount:
    def __init__(self, name, email, address, account_type):
        self.name = name
        self.email = email
        self.account_type = account_type
        self.address = address
        self.balance = 0

    def user_details(self):
        print("User Details:")
        print(f"Name: {self.name}")
        print(f"Email: {self.email}")
        print(f"Address: {self.address}")
        print(f"Account Type: {self.account_type}")
        print(f"Balance: {self.balance}")

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


class Info:
    all_accounts = []
    print("============= Welcome To OUR Bank ================= \n")

    def __init__(self):
        pass

    def get_choice(self):
        while True:
            print("1. Existing account")
            print("2. Create New account")
            print("3. Transfer Amount")
            print("4. Admin Options")
            print("5. Exit")
            schoices = input("Enter Your Choice: ")

            if schoices == "1":
                name = input("Enter your name: ")
                acc_number = input("Enter your account number: ")
                self.login_user(name, acc_number)
            elif schoices == "2":
                self.create_account()
            elif schoices == "3":
                self.transfer_amount()
            elif schoices == "4":
                self.admin_options()
            elif schoices == "5":
                print("Exiting. Goodbye!")
                break
            else:
                print("Invalid choice. Please try again.")

    def login_user(self, username, account_number):
        print("LOGIN Successfully")
        self.username = username
        self.account_number = account_number
        print(f"\n\t User Name : {self.username} \n\t Account Number : {self.account_number}\n\n")

    def create_account(self):
        name = input("Enter your name: ")
        email = input("Enter your email address: ")
        address = input("Enter your address: ")
        account_type = input("Enter your Account Type: ")
        person1 = CreateAccount(name, email, address, account_type)
        print(person1)
        Info.all_accounts.append(person1)
        length = len(Info.all_accounts)
        account_number = f"{name.lower()}{100 + length}"
        print("Account Number: " + account_number)
        print(f"Total accounts: {length}")

        print("\nChoose an option:")
        print("1. Deposit")
        print("2. Withdraw")
        print("3. Check Balance")
        print("4. Transfer Amount")
        print("5. User Details")
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
        elif choice == "5":
            person1.user_details()
        else:
            print("Invalid choice.")

    def transfer_amount(self):
        sender_name = input("Enter your name: ")
        receiver_name = input("Enter the receiver's name: ")
        amount = int(input("Enter the amount to transfer: "))

        sender = None
        receiver = None

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

    def admin_options(self):
        admin = Admin()

        while True:
            print("\nAdmin Options:")
            print("1. Create Account")
            print("2. Delete Account")
            print("3. See All Accounts")
            print("4. Check Total Balance")
            print("5. Check Total Loan Amount")
            print("6. Toggle Loan Feature (ON/OFF)")
            print("7. Back to Main Menu")
            admin_choice = input("Enter your choice: ")

            if admin_choice == "1":
                name = input("Enter name: ")
                email = input("Enter email: ")
                address = input("Enter address: ")
                account_type = input("Enter account type: ")
                admin.create_account(name, email, address, account_type)
            elif admin_choice == "2":
                account_number = input("Enter the account number to delete: ")
                admin.delete_account(account_number)
            elif admin_choice == "3":
                admin.see_all_accounts()
            elif admin_choice == "4":
                admin.check_total_balance()
            elif admin_choice == "5":
                admin.check_total_loan_amount()
            elif admin_choice == "6":
                loan_toggle_choice = input("Do you want to enable or disable the loan feature (ON/OFF): ")
                admin.toggle_loan_feature(loan_toggle_choice.upper() == "ON")
            elif admin_choice == "7":
                break
            else:
                print("Invalid choice. Please try again.")


class Admin:
    def __init__(self):
        self.user_accounts = {}

    def create_account(self, name, email, address, account_type):
        account_number = f"{name.lower()}{100 + len(self.user_accounts) + 1}"
        account = CreateAccount(name, email, address, account_type)
        self.user_accounts[account_number] = account
        print(f"Account created successfully. Account Number: {account_number}")

    def delete_account(self, account_number):
        if account_number in self.user_accounts:
            del self.user_accounts[account_number]
            print(f"Account {account_number} deleted successfully.")
        else:
            print(f"Account {account_number} not found.")

    def see_all_accounts(self):
        print("All User Accounts:")
        for account_number, account in self.user_accounts.items():
            print(f"Account Number: {account_number}")
            account.user_details()
            print()

    def check_total_balance(self):
        total_balance = sum(account.balance for account in self.user_accounts.values())
        print(f"Total Available Balance in the bank: {total_balance}")

    def check_total_loan_amount(self):
        total_loan_amount = 0  # Placeholder for calculating the total loan amount
        print(f"Total Loan Amount in the bank: {total_loan_amount}")

    def toggle_loan_feature(self, enable):
        if enable:
            print("Loan feature is now ON.")
        else:
            print("Loan feature is now OFF.")


nayeem = Info()
nayeem.get_choice()
