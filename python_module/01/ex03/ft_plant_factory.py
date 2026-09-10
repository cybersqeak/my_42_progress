
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


if __name__ == "__main__":
    print("=== Plant Factory Output ===")
    plants = [
            Plant("Rose", 29, 2), 
            Plant("Banana", 2, 19), 
            Plant("Apple", 40, 100), 
            Plant("Yuri", 43, 43),
            Plant("sasami", 100, 53)
]

    for plant in plants:
        plant.show()
