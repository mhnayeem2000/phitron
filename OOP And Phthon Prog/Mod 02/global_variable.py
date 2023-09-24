main_balance = 10000
def count_bal(item,value):
    global main_balance
    current_balance = main_balance - value
    return current_balance

print(count_bal("Glass",1000))


def bank_bal(item,main_balance,value):
    curr_bal = main_balance - value
    return curr_bal
print(bank_bal("Glass",10000,1000))