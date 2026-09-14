

class GardenError(Exception):
    def __init__(self, message: str = "Unknown Garden Error"):
        super().__init__(message)
class PlantError(GardenError):
    def __init__(self,message : str = "Unknown Plant Error"):
        super().__init__(message)

class WaterError(GardenError):
    def __init__(self, message:str = "Unknown Water Error"):
        super().__init__(message)

class Plant():

    def __init__(self,name, height,age,lw):
        self.name = name
        self.height = height
        self.age = age 
        self.last_watering = lw
    def check_age(self):
        if (self.age < 0 or self.age >= 100):
            raise PlantError(f"The {self.name} plant is wilting!")
    def check_watering(self):
        if (self.last_watering < 0 or self.last_watering >= 4):
            raise WaterError(f"Not enough water in tank")
    def __str__(self) ->str:
        return f" {self.name}"
        

    

def test():
    plants = [
            Plant("ROSE", 100, 17,5),
            Plant("cesare", 100, -3,2),
            Plant("flowj", 100, 102,2),
            Plant("sqeak", 100, 12,-1)
     ]
    for  i in plants :
        try:
             i.check_age()
        except PlantError as e:
             print(f"caught an error plant{i},  {e}")
        try:
             i.check_watering()
        except WaterError as e:
             print(f"caught an error plant{i},  {e}")
        print(f"test plant {i} done!\n") 



if __name__ == "__main__":
    print("=== Custom Garden Error Demo ===")
    test()

    print("test has been finished")
        


