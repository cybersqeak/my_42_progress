class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        self._name: str = name
        self._height: float = 0.0
        self._age: int = 0

        try:
            self._validate(height, "height")
            self._height = float(height)
        except ValueError as e:
            print(f"{self._name.capitalize()}: {e}")

        try:
            self._validate(age, "age")
            self._age = age
        except ValueError as e:
            print(f"{self._name.capitalize()}: {e}")

        print("Plant created: ", end="")
        self.show()

    def _validate(self, value: float, label: str) -> None:
        if value < 0:
            raise ValueError(f"Error, {label} can't be negative")

    def show(self) -> None:
        print(f"{self._name.capitalize()}: "
              f"{self._height}cm, {self._age} days old")

    def get_height(self) -> float:
        return self._height

    def get_age(self) -> int:
        return self._age

    def set_height(self, new_height: float) -> None:
        try:
            self._validate(new_height, "height")
            self._height = float(new_height)
            print(f"Height updated: {new_height}cm")
        except ValueError as e:
            print(f"{self._name.capitalize()}: {e}")
            print("Height update rejected")

    def set_age(self, new_age: int) -> None:
        try:
            self._validate(new_age, "age")
            self._age = new_age
            print(f"Age updated: {new_age} days")
        except ValueError as e:
            print(f"{self._name.capitalize()}: {e}")
            print("Age update rejected")

class Flower(Plant):

    def __init__(self, name, height, age, color: str):
        super().__init__(name, height, age)
        self._color: str = color
        self._blooming: int = 0

    def bloom(self):
        self._blooming = 1

    def show(self):
        super().show()
        print(f"Color: {self._color}")
        if self._blooming:
            print(f"{self._name.capitalize} is blooming beautifully!")
        else:
            print(f"{self._name.capitalize} has not bloomed yet")

class Tree(Plant):
    def __init__(self, name, height, age, trunk_diameter):
        super().__init__(name, height, age)
        self._diameter = trunk_diameter
        self._producedshade = 0
    def produce_shade(self)-> None:
        self._producedshade = 1

    def show(self)-> None:
        if self._producedshade:
            print(f"Tree {self._name} now produces a shade of {self._height}cm and {self._diameter}cm wide.")
            return
        else:
            super().show()
            print(f"Trunk diameter: {self._diameter}")



class Vegetable(Plant):
    def __init__(self, name, height, age, harvest_season: str, nutritional_value: int): #maybe i should check valid hervest season
        super().__init__(name, height, age)
        self._harvest_season = harvest_season
        self._nutritional_value = nutritional_value
        self._initage = age

    def show(self):
        super().show()
        print(f"Harvest season: {self._harvest_season}")
        self._nutritional_value = self._age - self._initage # should use the original value not updating here?..
        print(f"Nutritional value: {self._nutritional_value}")




if __name__ == "__main__":
    print("=== Garden Plant Types  ===")
    print("=== Flower")
    #try:
    rose = Flower("rose", 15, 10, "red")
    print(f"color {rose._color}")
    #except AttributeError:
    #print("haha")
    #rose.show()
    #print("[asking the rose to bloom]")
    #rose.bloom()
    #rose.show()
