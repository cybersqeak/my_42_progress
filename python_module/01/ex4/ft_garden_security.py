class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:

        try:
            self.name = name
            self.validate(height, "Height")
            self.height = height
            flag = 0

        except ValueError as e:
            flag = 1
            print(f"{self.name}: {e}")

        try:
            self.validate(age, "Age")
            self.age = age

        except ValueError as e:
            flag = 1
            print(f"{self.name}: {e}")

        if flag == 1:
            if  self.height is None and self.age is None:
                self.height = 42
                self.age = 42
            elif not self.height and self.age:
                self.height = 42
            elif self.height and not self.age:
                self.age = 42

        print(f"Plant created: {self.name}: {self.height}cm, {self.age} days old")

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

    def set_height(self, up_height) -> None:
        try:
            self.validate(up_height, "Height")
            self.height = up_height
        except ValueError as e:
            print(f"{self.name}: {e}")


    def set_age(self, up_age) -> None:
        try:
            self.validate(up_age, "Age")
            self.age = up_age
        except ValueError as e:
            print(f"{self.name}: {e}")


    def validate(self, data:int | float, dtype: str) -> None:
        if data < 0:
            raise ValueError(f"Error, {dtype} can't be negative\n{dtype} update rejected")

if __name__ == "__main__":
    rose = Plant("rose", -4, 3)
    rose.set_height(-1)
    rose.set_age(32)
    rose.show()


