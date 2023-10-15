class Admin:
    def __init__(self):
        # Assume a dictionary to store user accounts where keys are account numbers and values are account details.
        self.user_accounts = {}

    def create_account(self, name, email, address, account_type):
        # Generate a unique account number based on the length of the existing accounts.
        account_number = f"{name.lower()}{100 + len(self.user_accounts) + 1}"

        # Create a new account instance
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
        # Assuming you have a loan system and can calculate the total loan amount.
        total_loan_amount = 0  # Calculate the total loan amount
        print(f"Total Loan Amount in the bank: {total_loan_amount}")

    def toggle_loan_feature(self, enable):
        if enable:
            print("Loan feature is now ON.")
        else:
            print("Loan feature is now OFF.")


# Rest of your code remains unchanged...

nayeem = Info()
admin = Admin()  # Create an instance of the Admin class

while True:
    print("1. Existing account")
    print("2. Create New account")
    print("3. Transfer Amount")
    print("4. Admin Options")
    print("5. Exit")
    choice = input("Enter Your Choice: ")

    if choice == "1":
        name = input("Enter your name: ")
        acc_number = input("Enter your account number: ")
        nayeem.login_user(name, acc_number)
    elif choice == "2":
        nayeem.create_account()
    elif choice == "3":
        nayeem.transfer_amount()
    elif choice == "4":
        # Admin options
        admin_option = input("Enter Admin option (1-5): ")
        if admin_option == "1":
            admin.see_all_accounts()
        elif admin_option == "2":
            account_number = input("Enter the account number to delete: ")
            admin.delete_account(account_number)
        elif admin_option == "3":
            admin.check_total_balance()
        elif admin_option == "4":
            admin.check_total_loan_amount()
        elif admin_option == "5":
            loan_toggle_choice = input("Do you want to enable or disable the loan feature (ON/OFF): ")
            admin.toggle_loan_feature(loan_toggle_choice.upper() == "ON")
        else:
            print("Invalid Admin option. Please try again.")
    elif choice == "5":
        print("Exiting. Goodbye!")
        break
    else:
        print("Invalid choice. Please try again.")
