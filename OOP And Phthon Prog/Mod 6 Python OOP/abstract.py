class Animal:
    def eat(self,name,food):
        print("{name} iss eat {food}")
    def move(self,name,legs):
        print("{name} has {legs} legs")
class Monkey(Animal):
    def __init__(self,name,food,legs) -> None:
        self.name = name
        self.food = food
        self.legs = legs
        super().__init__()
kodu =  Monkey('kodu','Banana',4)
kodu.eat()
