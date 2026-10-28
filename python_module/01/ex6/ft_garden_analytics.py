class Plant:
    class Stats:
        def __init__(self) -> None:
            self._grow = 0
            self._age = 0
            self._show = 0

        def add_grow(self) -> None:
            self._grow += 1

        def add_age(self) -> None:
            self._age += 1

        def add_show(self) -> None:
            self._show += 1

        def display(self) -> None:
            print(f"Stats: {self._grow} grow, {self._age} age, "
                  f"{self._show} show")

    def __init__(self, name: str, height: float, age: int) -> None:
        self._stats: Plant.Stats = self._make_stats()
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

    def _make_stats(self) -> "Plant.Stats":
        return Plant.Stats()

    def _validate(self, value: float | int, label: str) -> None:
        if value < 0:
            raise ValueError(f"Error, {label} can't be negative")

    def show(self) -> None:
        self._stats.add_show()
        print(f"{self._name.capitalize()}: "
              f"{round(self._height, 3)}cm, {self._age} days old")

    def get_name(self) -> str:
        return self._name

    def get_stats(self) -> "Plant.Stats":
        return self._stats

    def get_height(self) -> float:
        return self._height

    def get_age(self) -> int:
        return self._age

    def set_height(self, new_height: float) -> None:
        try:
            self._validate(new_height, "height")
            self._height = new_height
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

    def grow(self, plus_height: float) -> None:
        self._stats.add_grow()
        self._height += plus_height

    def age(self, plus_age: int) -> None:
        self._stats.add_age()
        self._age += plus_age

    @staticmethod
    def check_age(given_age: int) -> bool:
        return given_age > 365

    @classmethod
    def anonymous(cls) -> "Plant":
        return cls("Unknown plant", 0.0, 0)


class Flower(Plant):
    def __init__(self, name: str, height: float, age: int,
                 color: str) -> None:
        # set before super().__init__(): Plant.__init__ calls show()
        self._color: str = color
        self._blooming: bool = False
        super().__init__(name, height, age)

    def bloom(self) -> None:
        self._blooming = True

    def show(self) -> None:
        super().show()
        print(f" Color: {self._color}")
        if self._blooming:
            print(f" {self._name.capitalize()} is blooming beautifully!")
        else:
            print(f" {self._name.capitalize()} has not bloomed yet")


class Seed(Flower):
    def __init__(self, name: str, height: float, age: int,
                 color: str) -> None:
        self._seeds: int = 0
        super().__init__(name, height, age, color)

    def bloom(self) -> None:
        super().bloom()
        self._seeds = 42

    def show(self) -> None:
        super().show()
        print(f" Seeds: {self._seeds}")


class Tree(Plant):
    class Stats(Plant.Stats):

        def __init__(self) -> None:
            super().__init__()
            self._shade = 0

        def add_shade(self) -> None:
            self._shade += 1

        def display(self) -> None:
            super().display()
            print(f" {self._shade} shade")

    def __init__(self, name: str, height: float, age: int,
                 trunk_diameter: float) -> None:
        self._diameter: float = trunk_diameter
        super().__init__(name, height, age)

    def _make_stats(self) -> "Plant.Stats":
        self._tree_stats = Tree.Stats()
        return self._tree_stats

    def produce_shade(self) -> None:
        self._tree_stats.add_shade()
        print(f"Tree {self._name.capitalize()} now produces a shade of "
              f"{round(self._height, 3)}cm long and "
              f"{self._diameter}cm wide.")

    def show(self) -> None:
        super().show()
        print(f" Trunk diameter: {self._diameter}cm")


class Vegetable(Plant):
    def __init__(self, name: str, height: float, age: int,
                 harvest_season: str, nutritional_value: int) -> None:
        self._harvest_season: str = harvest_season
        self._nutritional_value: int = nutritional_value
        super().__init__(name, height, age)

    def age(self, plus_age: int) -> None:
        super().age(plus_age)
        self._nutritional_value += plus_age

    def show(self) -> None:
        super().show()
        print(f" Harvest season: {self._harvest_season}")
        print(f" Nutritional value: {self._nutritional_value}")


def display_stats(plant: Plant) -> None:
    print(f"[statistics for {plant.get_name().capitalize()}]")
    plant.get_stats().display()


if __name__ == "__main__":
    print("=== Garden statistics ===")
    print("=== Check year-old")
    print(f"Is 30 days more than a year? -> {Plant.check_age(30)}")
    print(f"Is 400 days more than a year? -> {Plant.check_age(400)}")

    print()
    print("=== Flower")
    rose = Flower("rose", 15.0, 10, "red")
    display_stats(rose)
    print("[asking the rose to grow and bloom]")
    rose.grow(8)
    rose.bloom()
    rose.show()
    display_stats(rose)

    print()
    print("=== Tree")
    oak = Tree("oak", 200.0, 365, 5.0)
    display_stats(oak)
    print("[asking the oak to produce shade]")
    oak.produce_shade()
    display_stats(oak)

    print()
    print("=== Seed")
    sunflower = Seed("sunflower", 80.0, 45, "yellow")
    print("[make sunflower grow, age and bloom]")
    sunflower.grow(30)
    sunflower.age(20)
    sunflower.bloom()
    sunflower.show()
    display_stats(sunflower)

    print()
    print("=== Anonymous")
    unknown = Plant.anonymous()
    display_stats(unknown)
