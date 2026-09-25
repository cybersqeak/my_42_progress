import math

def get_player_pos() ->  tuple[float, float, float]: 
    
     while True:
        try:
              parts= input("Enter new coordinates as floats in format 'x,y,z': ").split()
              if (len(parts) != 3):
                  raise ValueError(f"expected 3 coordinate, got {parts}")
        
              x, y, z = float(parts[0]),float(parts[1]),float(parts[2])
              return x, y, z
        except ValueError as e:
             print(f"Invalid input: {e}")


p1 = get_player_pos()   # p1 is a tuple: (x, y, z)
print("First players coordinate information.")
print(f"x, y, z: {p1[0]}, {p1[1]}, {p1[2]}")
distance = math.sqrt(p1[0]**2 + p1[1]**2 + p1[2]**2)
print(f"Distance from Center(0, 0, 0) is: {round(distance, 5)}")

print("Get Second set of coordinate")
p2 = get_player_pos()
distance_bt = math.sqrt((p2[0]-p1[0])**2 + (p2[1]-p1[1])**2 + (p2[2]-p1[2])**2)
print(f"Distance between first coordinate to second coordinate: {round(distance_bt, 5)}")
