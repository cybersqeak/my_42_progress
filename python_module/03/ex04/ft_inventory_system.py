import sys


def update(inventory:dict[str,int]):
    inventory["mama!!!!"] = 5
    inventory.update({"chichi!!!!":3})
    print(f"Updated inventory : {inventory}")
    
    

def print_info(inventory:dict[str,int]):
    items = list(inventory.keys())
    print(f"Item list : {items}")
    num_items = len(inventory.keys())
    num_quantity = sum(inventory.values())
    print(f"Total quantity of the {num_items} items: {num_quantity}")
    most = None
    least = None
    for name in inventory.keys():
        quantity = inventory[name]
        percentage = round(quantity * 100/ num_quantity,1)
        print(f"Item {name} represents {percentage}%")
        if (most is None or quantity >= inventory[most]):
            most = name
        if (least is None or quantity <= inventory[least]):
            least = name
    print(f"Item most abundant:{most} with quantity {inventory[most]}")
    print(f"Item least abundant:{least} with quantity {inventory[least]}")
        
     
    
def parse_items(args:list[str]) -> dict[str,int]:

    inventory : dict[str, int] = {}
    for arg in args:
        parts:list[str] = arg.split(':')
        if (len(parts) != 2 or not parts[0] or not parts[1]): #not "" -> false -> not false => true 
            print(f"Error - Invalid parameter '{arg}'")
            continue 
        name, quantity  = parts
        if name in inventory :
            print(f"Redundunt item {name} - discarding")
            continue
        try:
            inventory[name] = int(quantity)
        except ValueError as e:
            print(f"Quantity error for '{name}': {e}")
    return inventory

if __name__ == "__main__":
    print("=== Inventory System Analysis ===")
    inventory:dict[str, int] =  parse_items(sys.argv[1:])
    print(f"Got inventory {inventory}")
    print_info(inventory)
    update(inventory)
    
    


