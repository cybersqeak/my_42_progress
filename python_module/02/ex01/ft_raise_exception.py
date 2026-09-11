

class temp():

    def check_error(self):
        if self.temp < 0 :
            raise ValueError(f"Caught input_temperature error: {self.temp}°C is too cold for plants (min 0°C)\n")
        else :
            raise ValueError(f"Caught input_temperature error: {self.temp}°C is too hot for plants (max 40°C)\n")

    def test_temperature(self,temp_str):
        try :
           self.temp = self.input_temperature(temp_str)
        except ValueError :
            print(f"Caught input_temperature error: invalid literal for int() with base 10: '{temp_str}'\n")
            return 
        if (0 <= self.temp & self.temp <= 40):
            print(f"Temperature is now {self.temp}\u00b0C\n")
        else :
            try:
                self.check_error()
            except ValueError as e:
                print(e)

    def input_temperature(self,temp_str):
        print(f"Input data is '{temp_str}'")
        return int(temp_str)

if __name__ == "__main__":
    print("=== Garden Temperature Checker ===\n")
    tmp = temp()
    tmp.test_temperature("r")
    tmp1 = temp()
    tmp1.test_temperature("30")
    tmp2 = temp()
    tmp2.test_temperature("52")
    tmp3 = temp()
    tmp2.test_temperature("-43")
    print("All tests completed - program didn't crash!")
