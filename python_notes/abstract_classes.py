# VL 3rd Abstract Classes Notes
from abc import ABC, abstractmethod

class Animal(ABC):
    def __init__(self, name):
        self.name = name
    
    def __str__(self):
        return self.name

    @abstractmethod
    def move(self):
        pass

class Quadrupeds(Animal):
    def __init__(self, name):
        super().__init__(name)

    def move(self):
        print(f"{self.name} can walk or run.")

class Aquatic(Animal):
    def __init__(self, name):
        super().__init__(name)

    def move(self):
        print(f"{self.name} can swim.")

class SeaLion(Aquatic, Quadrupeds):
    def __init__(self, name):
        super().__init__(name)

    def eats(self):
        print(f"{self.name} eats penguins and krill")


sealion = SeaLion("Greg")

print(sealion)
sealion.move()
sealion.eats()
print(Aquatic.mro())
