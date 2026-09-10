
class Mammal:
    def __init__(self, name):
        print(name, "is a mammal")

class CanFly(Mammal):
    def __init__(self, name):
        print(name, "cannot fly")
        super().__init__(name)

class CanSwim(CanFly):
    def __init__(self, name):
        print(name, "cannot swim")
        super().__init__(name)

class Animal(CanSwim):
    def __init__(self, name):
        super().__init__(name)

dog = Animal("Dog")
