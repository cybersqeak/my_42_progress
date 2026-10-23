
class Plant:

    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name
        self.height = height
        self.height_init = height
        self.age = age
        print(f"Created: {self.name}: {self.height}cm, {self.age} days old")

    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self.age} days old")

    def grow(self) -> None:
        for i in range(1, 8):
            print(f" === Day {i} ===")
            self.height += 0.8
            self.age += 1
            height_ab: float = round(self.height, 3)
            print(f"{self.name}: {height_ab}cm, {self.age} days old")

    def derivative(self) -> None:
        delta = round((self.height - self.height_init), 3)
        print(f"Growth this week: {delta}cm")


if __name__ == "__main__":
    print("=== Plant Factory Output ===")
    plants = [
            Plant("Rose", 29, 2),
            Plant("Banana", 2, 19),
            Plant("Apple", 40, 100),
            Plant("Yuri", 43, 43),
            Plant("sasami", 100, 53)
            ]
