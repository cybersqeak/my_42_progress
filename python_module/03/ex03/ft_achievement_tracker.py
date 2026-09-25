import random 

def gen_player_achivements(x):
    achivements :list[str]= ["Smart", "Programing Skill", "Math Skill", "Running Fast", "Critical Thinking", "Though Body", "healthy Body"]
    if (x == 0):
        return set(random.choices(achivements, k = 3))
    else :
        return set(achivements)


if __name__ == "__main__":

    print("=== Achievement Tracker System ===")
    print("")
    players = {
            "Alice":gen_player_achivements(0),
            "Bob":gen_player_achivements(0),
            "Cesare":gen_player_achivements(0),
            "Rob": gen_player_achivements(0)
            }
    for name, achivements in players.items():
        print(f"{name} has: {achivements}")
    Alice = players["Alice"]
    Bob = players["Bob"]
    Cesare = players["Cesare"]
    Rob = players["Rob"]
    print(f"Common achivements : {set.intersection(Alice,Bob,Cesare,Rob)}")
    print("")
    dif_player = {
            "Alice": set.difference(Alice,Bob,Cesare,Rob),
            "Bob": set.difference(Bob,Alice,Cesare,Rob),
            "Cesare": set.difference(Cesare,Bob,Alice,Rob),
            "Rob": set.difference(Rob,Bob,Cesare,Alice)
            }
    print("")
    for name, dif in dif_player.items():
        print(f"Only {name} has: {dif}")
    miss_player = {
            "Alice" : set.difference(gen_player_achivements(1),Alice),
            "Bob" : set.difference(gen_player_achivements(1),Bob),
            "Cesare" : set.difference(gen_player_achivements(1),Cesare),
            "Rob" : set.difference(gen_player_achivements(1),Rob)
            }
    print("")
    for name, missing in miss_player.items():
        print(f"{name} is missing: {missing}")
