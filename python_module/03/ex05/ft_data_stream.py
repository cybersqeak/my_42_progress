import random
import typing


def gen_event()-> typing.Generator[tuple[str, str], None, None] :
    players : list[str] = ["cesare", "James", "Kevin", "Robort", "Richard", "Takos", "Annie", "Emily", "Stitch"]
    actions : list[str] = ["Panch", "Kick", "Slap", "DropKick", "Eat", "Sleep", "Reproduce", "Touch", "kiss", "Choke"]
    while True:
        s_player = random.choice(players)
        s_action = random.choice(actions)
        yield (s_player, s_action)

def consume_event(event_lst :list[tuple[str, str]])->typing.Generator[tuple[str, str], None, None]:

    while event_lst:
        consumed = random.choice(event_lst)
        event_lst.remove(consumed)
        yield consumed

    print("No players and actions left")

gen = gen_event()
for i in range(0, 1000):
    whodid = next(gen)
    print(f"Event {i}: Player {whodid[0]} did action {whodid[1]}")

set_events : list[tuple[str,str]] = []

for i in range(0, 10):
    set_events.append(next(gen))
print(f"Built list of 10 events: {set_events}")


consumming = consume_event(set_events)
iteration = len(set_events)
for i in range(0, iteration):
    consumed = next(consumming)
    print(f"Got event from list: {consumed}")
    print(f"Remains in list: {set_events}")
