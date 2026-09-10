def ft_water_reminder():
    since = int(input("Days since last watering: "))
    if (2 < since):
        print("Water the plants!")
    else :
        print("Plants are fine")
