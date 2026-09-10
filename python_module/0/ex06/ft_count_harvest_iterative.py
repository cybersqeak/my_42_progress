def ft_count_harvest_iterative():
    harvest_day = int(input("Days until harvest: "))

    for i in range(1, harvest_day + 1):
        print(f"Days {i}")
        i = i + 1 

    print("Harvest time!")

#ft_count_harvest_iterative()
