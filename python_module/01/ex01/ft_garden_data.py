
class Plant:

    def __init__(self,name,height, age):
        self.name = name
        self.height = height
        self.age = age 
        #self.data = f"{self.name}: {self.height}cm, {self.age} days old"
    def show(self):
        print(f"{self.name}: {self.height}cm, {self.age} days old")
data1 = Plant("cesare",189, 21)
data2 = Plant("sqeak",143, 90)
print("=== Garden Plant Registry ===")
data2.show()
data1.show()
data2.name = "haha"
print("\n\n")
data2.show()
