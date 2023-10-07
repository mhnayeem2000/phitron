
class Ena_poribahan:
    def __init__(self,name,address) -> None:
        self.name = name
        self.address = address
        self.drivers = []
        self.counters = []
     

class Driver(Ena_poribahan):
    def __init__(self,name,address) -> None:
        super().__init__(name,address)
        self.name = name
        self.address = address
    def add_driver(self,name):
        self.drivers.append(name) 

masud_driver = Driver("masud","Holan")
print(masud_driver.name)
print(f'Driver name is {masud_driver.name} and address is {masud_driver.address}')
Driver.add_driver("A Rahim")
Driver.add_driver("A Kahim")
Driver.add_driver("A Jabbar")
d = Ena_poribahan('nayeem','holan')
d.drivers
     


        
