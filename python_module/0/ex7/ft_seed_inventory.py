
def ft_seed_inventory(seed_type, quantity, unit) -> None:
    if (unit == "packets"):
        unit_parameter = "packets available"
    elif (unit == "grams"):
        unit_parameter = "grams total"
    elif (unit == "area"):
        unit_parameter = f"covers {quantity} square meters"
        print(f"{seed_type} seeds: {unit_parameter}")
        return
    else:
        print("Unknown unit type")
        return
    print(f"{seed_type} seeds: {quantity} {unit_parameter}")
