import random 

def alchemist():

    i_names : list[str] = ["Cesare", "Takeo", "james", "micheletto", "robert", "Kevin", "Lindas", "espteban", "Ruggero"]

    print(f"Initial list of players: {i_names}")

    f_names :list[str] = []

    for i in i_names:
        f_names.append(i.capitalize())

    print (f"New list with all names capitalized: {f_names}")

    score_dict :dict[str,int] = {i:random.randint(0,1000) for i in i_names}
    print(f"Score dict: {score_dict}")

    av_score:int = sum(score_dict.values())/len(score_dict.keys())


    print(f"sum of values {sum(score_dict.values())} and sum of count keys {len(score_dict.keys())}.")
    print(f"Score average is {av_score}")

    high_s = {}

    for k,v in score_dict.items():
        if v >= av_score:
            high_s.update({k:v})

    print(f"High scores{high_s}")

if __name__ == "__main__":
    alchemist()
