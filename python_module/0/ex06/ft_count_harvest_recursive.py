
def ft_count_harvest_recursive():
    harvest_day = int(input("Days until harvest: "))
    if (harvest_day <= 0):
        print("Harvest time!")
        return 
    print_left_days(harvest_day,1)
    print("Harvest time!")
    
def print_left_days(x,i):
    if (i > x):
        return 
    print(f"Day {i}")
    i = i + 1
    print_left_days(x,i)

#ft_count_harvest_recursive()
