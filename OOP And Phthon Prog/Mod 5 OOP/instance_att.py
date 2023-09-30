class shop:
    def __init__(self,name):
        self.name = name
        self.cart = []
    def add_to_cart(self,item):
        self.cart.append(item)
    def remove_item(self):
        self.cart.pop()
person1 = shop('Nayeem')
person1.add_to_cart('Iphone 15')
person1.add_to_cart('Iphone 15 pro max')
print( person1.cart)
person1.remove_item()
print(person1.cart)
