from abc import ABC , abstractmethod
class Animal(ABC):
    @abstractmethod
    def eat(self):
        print("I need food")
    def move(self):
        print("I have 4 legs")

class Monkey(Animal):
    def __init__(self,name) -> None:
        self.name = name
        super().__init__()
    def eat(self):
        print("I eat banana")

sjd = Monkey('luckey')
sjd.eat()
sjd.move()