# VL 3rd Classes Notes

class Person:
    """Person class with first and last names as well as age. 
    Method to get full name, increase age by 1"""
    first_name: str
    last_name: str
    age: int
    def __init__(self, last_name, _first_name="John",  age=0):
        """Sets all values"""
        self._first_name = _first_name
        self.last_name = last_name
        self.age = age

    def setAge(self): #setter method
        """Increase age by 1"""
        self.age += 1
    
    def full(self) -> str: #getter method
        """Create full name"""
        return self._first_name + " " + self.last_name
    
    def __str__(self) -> str:
        return f"first name: {self._first_name}\nlast name: {self.last_name}\nage: {self.age}\n"
        

    

tia = Person("LaRose","Tia",  28)
alex = Person("LaRose","Alex",  37)
tia.setAge()

print(f"{tia.full()} age: {tia.age}")
print(f"{alex.full()} age: {alex.age}")
print(tia)