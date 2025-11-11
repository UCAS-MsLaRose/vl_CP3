from dataclasses import dataclass, field
from collections import namedtuple

Color = namedtuple('Color', ['red', 'green', 'blue'])
red = Color(255,0,0)
print(red.red)

@dataclass(order=True, frozen=True)
class Person:
    sort_index: int = field(init=False, repr=False)
    name: str
    job: str
    age: int

    def __post_init__(self):
        object.__setattr__(self,'sort_index', self.age)

person1 = Person("Tia", "Sales", 29)
person2 = Person("Katie", "Dispatch", 35)
person3 = Person("Katie", "Dispatch", 35)

print(person1)

print(person2 == person3)
print(person1>person2)

people = [person1, person2, person3]
nums = [1,53,851,86,4,864,651,68,7,654]
sort_nums = sorted(nums, reverse=True)
print(sort_nums)

#def age_sort(person):
#    return person.age
from operator import attrgetter
sort_people = sorted(people, key=attrgetter('job'))
print(sort_people)

def hello(age=12, *name):
    print(age)
    for x in name:
        print(f"hello {x}")

hello(12, "Alex", "Katie", "Andrew")

def another(**names):
    if "mname" in names.keys():
        print(f"Hello {names['fname']} {names['mname']} {names['lname']}")
    else:
        print(f"Hello {names['fname']} {names['lname']}")

another(fname="Jake", lname="LaRose")