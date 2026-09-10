
class Plant:

    def __init__(self, name, height, age) -> None:
        self.name = name
        self.height = height
        self.height_init = height
        self.age = age
        print(f"Created: {self.name}: {self.height}cm, {self.age} days old")

    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self.age} days old")

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

if __name__ == "__main__":
    rose = Plant("rose", 20, 2)
    rose.set_height()
    rose.set_age()
    rose.show()


