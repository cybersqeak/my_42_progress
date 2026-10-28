class Plant:

    class stats:
        def __init__(self) -> None:
            self._growcount = 0
            self._showcount = 0
            self._agecount = 0
        
        def grow_add(self) -> None:
            self._growcount += 1

        def show_add(self) -> None:
            self._showcount += 1

        def age_add(self) -> None:
            self._agecount += 1

        def display(self) -> None:
            print(f"Stats: {self._growcount} grow, {self._agecount} age, "
                  f"{self._showcount} show")


    def __init__(self, name: str, height: float, age: int) -> None:
        self._stats = Plant.stats()
        self._name: str = name
        self._height: float = 0.0
        self._age: int = 0
        try:
            self._validate(height, "height")
            self._height = height
        except ValueError as e:
            print(f"{self._name.capitalize()}: {e}")

        try:
            self._validate(age, "age")
            self._age = age
        except ValueError as e:
            print(f"{self._name.capitalize()}: {e}")
        self.show()

    def _validate(self, value: float | int, label: str) -> None:
        if value < 0:
            raise ValueError(f"Error, {label} can't be negative")

    def show(self) -> None:
        self._stats._showcount += 1
        print(f"{self._name.capitalize()}: "
              f"{round(self._height, 3)}cm, {self._age} days old")

    def grow(self, plus_height: float) -> None:
        self._stats._growcount += 1
        self._height += plus_height

    def age(self, plus_age: int) -> None:
        self._stats._agecount += 1
        self._age += plus_age

    @staticmethod
    def check_age(given_age :int) -> bool:
        if 365 < given_age:
            return True
        return False

    UK_height: float = 0.0
    UK_age: int = 0

    @classmethod
    def test_plant(cls):
         print(f"Unknown Plant: "
               f"{cls.UK_height}cm, {cls.UK_age} days old")



class Flower(Plant):

    def __init__(self, name: str, height: float, age: int, color: str) -> None:
        self._color: str = color
        self._blooming: int = 0
        super().__init__(name, height, age)

    def bloom(self) -> None:
        self._blooming = 1

    def show(self) -> None:
        super().show()
        print(f" Color: {self._color}")
        if self._blooming:
            print(f" {self._name.capitalize()} is blooming beautifully!")
        else:
            print(f" {self._name.capitalize()} has not bloomed yet")

class Seed(Flower):
    def __init__(self, name: str,
                 height: float, age: int, color: str) -> None:
        super().__init__(name, height, age, color)

    def show(self) -> None:
        super().show()
        print(" Seeds: ", end = "")
        if self._blooming:
            print(42)
        else:
            print(0)
            


class Tree(Plant):
    def __init__(self, name: str, height: float,
                 age: int, trunk_diameter: float) -> None:
        self._diameter: float = trunk_diameter
        self._producedshade: int = 0

        super().__init__(name, height, age)

    def produce_shade(self) -> None:
        self._producedshade = 1

    def show(self) -> None:
        if self._producedshade:
            print(f"Tree {self._name} now produces a shade of",
                  f"{self._height}cm long and {self._diameter}cm wide.")
            return
        else:
            super().show()
            print(f" Trunk diameter: {self._diameter}cm")


class Vegetable(Plant):
    def __init__(self, name: str, height: float, age: int,
                 harvest_season: str, nutritional_value: int) -> None:
        self._harvest_season = harvest_season
        self._nutritional_value = nutritional_value
        super().__init__(name, height, age)

    def show(self) -> None:
        super().show()
        print(f" Harvest season: {self._harvest_season}")
        print(f" Nutritional value: {self._nutritional_value}")

    def grow(self, plus_height: float) -> None:
        super().grow(plus_height)

    def age(self, plus_age: int) -> None:
        super().age(plus_age)
        self._nutritional_value += plus_age


if __name__ == "__main__":
    print("=== Garden Plant Types ===")
    print("=== Check year-old")
    print(f"Is 30 days more than a year? -> {Plant.check_age(30)}")
    print(f"Is 400 days more than a year? -> {Plant.check_age(400)}")
    print()
    print("=== Flower")
    
    rose = Flower("rose", 15.0, 10, "red")
    print("[asking the rose to bloom]")
    rose.bloom()
    rose.show()
    print()
    print("=== Tree")

    tree = Tree("Oak", 200.0, 365, 5.0)
    print("[asking the oak to produce shade]")
    tree.produce_shade()
    tree.show()
    print()
    print("=== Vegetable")
    tomato = Vegetable("tomato", 5.0, 10, "April", 0)
    print("[make tomato grow and age for 20 days]")
    tomato.grow(42)
    tomato.age(20)
    tomato.show()
    print()
    print("=== Seeds")
    sunflower = Seed("sunflower", 80.0, 45, "yellow")
    print("[make sunflower grow, age and bloom]")
    sunflower.grow(30.0)
    sunflower.age(20)
    sunflower.bloom()
    sunflower.show()
    
    print()
    print("=== Anonymous")
    Plant.test_plant()
    print()
    print()
    print("testing accessing to stats")
    stats1 = Plant.stats()
    stats1.display()

    

