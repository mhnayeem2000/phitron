from abc import ABC , abstractmethod
class Users(ABC):
    def __init__(self,name,phone,email,address):
        self.phone = phone
        self.email = email
        self.address = address
        self.name = name
class Customer(Users):
    def __init__(self, name,money,phone,email,address):
        self.money = money
        self.__order = None
        super().__init__(name,phone,email,address)

    @property
    def order(self):
        return self.__order
    
    @order.setter
    def order(self,order):
        self.__order = order

    def place_order(self,order):
        self.order = order
        print(f'{self.name} place an order {order.items}')

    def pay_order(self,amount):
        self.amount = amount
        self.money = self.money- self.

    def give_tips(self,tips_amount):
        self.tips = tips_amount
        self.amount = self.amount - self.tips

    def write_review(self,review):
        pass    

class Employee(Users):
    def __init__(self, name,salary,start_date,department,phone,email,address):
        super().__init__(name,phone,email,address)
        self.salary = salary
        self.start_date = start_date
        self.department = department
class Chef(Employee):
    def __init__(self, cooking, name, salary, start_date, department, phone, email, address):
        super().__init__(name, salary, start_date, department, phone, email, address)
        self.coocking  = cooking
        


                        