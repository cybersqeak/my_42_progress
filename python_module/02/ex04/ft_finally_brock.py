
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
        if (self.age < 0):
            raise PlantError()
        elif(self.age >= 100):
            raise PlantError("Plant is too old... going to heaven")
        print("Every thing is fine relate to plant age!")
    def check_watering(self):
        if self.last_watering < 0:
            raise WaterError ()
        elif self.last_watering >= 4 :
            raise WaterError("PLANT NEED A WATER")
 
    def __str__(self) ->str:
        return f" {self.name}"
    
def test_watering_system(Plants):
    print("opens the watering system")

    water_plant(Plants)

def water_plant(Plants):
    for i in Plants:
        try:
            print(f"watering the Plant {i}")
            x = 1/0
        except ZeroDivisionError as e:
            print(f"Caught an error : {e}")
        finally :
            i.name = str.capitalize(i.name)
            print(i.name)
        
    

def test():
    print("=== start test ===")

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
    plants = [Plant("god", 100, 21,3),
              Plant("Nancy", 100, 21,3),
              Plant("mike", 100, 21,3),
              Plant("Takeo", 100, 21,3)
              ]
    test_watering_system(plants)

    print("closing watering system")
        


