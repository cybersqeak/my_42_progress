
class Plant:

    def __init__(self, name, height, age) -> None:
        self.name = name
        self.height = height
        self.height_init = height
        self.age = age
    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self.age} days old")
    def grow(self) ->None :
        for i in range(1,8):
            print(f" === Day {i} ===")
            self.height += 0.8
            self.age += 1
            print(f"{self.name}: {round(self.height,3)}cm, {self.age} days old")
        
    def derivative(self):
        print("Growth this week: ",round((self.height - self.height_init),3), "cm")


if __name__ == "__main__" :
#    print(__name__)
    data1 = Plant("cesare",189, 21)
    print("=== Garden Plant Growth ===")
    data1.show()
    data1.grow()
    data1.derivative()

