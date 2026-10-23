class Plant:
    def __init__(self, name: str, height: float, age: int) -> None:
        # Defaults first, so the attributes always exist
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


if __name__ == "__main__":
    print("=== Garden Security System ===")
    rose = Plant("rose", 15, 10)
    print()
    rose.set_height(25)
    rose.set_age(30)
    print()
    rose.set_height(-5)
    rose.set_age(-5)
    print()
    print("Current state: ", end="")
    rose.show()
