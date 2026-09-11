

class temp():

        
    def test_temperature(self,temp_str):
        try :
           self.temp = self.input_temperature(temp_str)
           print(f"Temperature is now {self.temp}\u00b0C")
        except ValueError :
            print(f"Caught input_temperature error: invalid literal for int() with base 10: '{temp_str}'")


        


    def input_temperature(self,temp_str):
        print(f"Input data is '{temp_str}'")
        return int(temp_str)
            

if __name__ == "__main__":
    tmp = temp()
    tmp.test_temperature("r")
    tmp1 = temp()
    tmp1.test_temperature("43")

    print("All tests completed - program didn't crash!")
