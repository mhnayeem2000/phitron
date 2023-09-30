class phone:
    def __init__(self,name,price):
        self.name = name
        self.price = price

my_phone = phone('OPPO',13000)
iphone = phone('Iphone',130000)
print(my_phone.name,my_phone.price)
print(iphone.name,iphone.price)