
class Plant:

    def __init__(self, name, height, age) -> None:
        self.name = name
        self.height = height
        self.height_init = height
        self.age = age
        print(f"Created: {self.name}: {self.height}cm, {self.age} days old")

    def show(self) -> None:
        print(f"{self.name}: {round(self.height,3)}cm, {self.age} days old")

    def grow(self) -> None :
        for i in range(1,8):
            print(f" === Day {i} ===")
            self.height += 0.8
            self.age += 1
            print(f"{self.name}: {round(self.height,3)}cm, {self.age} days old")
        
    def derivative(self):
        print("Growth this week: ",round((self.height - self.height_init),3), "cm")
    
    def set_height(self):
        self.height = int(input("set height: "))
    def set_age(self):
        self.age = int(input("set age: "))
    @staticmethod
    def check_age(age):
        if (365 < age):
            print("It is older than a year")
        else :
            print("It is younger than a year")


class Flower(Plant):
    def __init__(self, name,height, age):
        super().__init__(name,height, age)
        self.color = input("Enter Color of Flower: ")
  
    def bloom(self):
        print(f"a {self.color} color Flower is blooming!!")



class Tree(Plant):
    def __init__(self, name,height, age):
        super().__init__(name,height, age)
        self.trunk_diameter = int(input("Enter the trunk diameter of tree :"))
    def produce_shade(self):
        print(f"WOW there is a {round(3.14 * self.height * self.trunk_diameter, 3)} of trunk shadow!")

class Vegetable(Plant):
    def __init__(self, name,height, age):
        super().__init__(name,height, age)
        self.harvest_season = int(input("Enter the harvest season for this vegetable in days: "))
        self.nutritional_value = 0
    def glow(self):
        self.nutritional_value += 10
        super().grow()



