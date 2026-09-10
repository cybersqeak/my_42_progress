class Person:
    def __init__(self, name, id):
        self.name = name
        self.id = id

class Emp(Person):
    def __init__(self, name, id):
        self.name_ = name   # Forgot to call Person’s __init__

emp = Emp("Jack", 103)
print(emp.name)
