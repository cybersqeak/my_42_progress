class Person:  
    def __init__(self, name, id):
        self.name = name
        self.id = id

class Emp(Person):  
    def __init__(self, name, id):
        super().__init__(name, id) 

emp = Emp("James", 103)
print(emp.name, emp.id)
