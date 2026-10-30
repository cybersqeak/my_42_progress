import sys


def calculate_score(s_list: list[int]) -> None:

    if (s_list):
        print(f"Scores processed: {s_list}")
        total_players = len(s_list)
        total_score = sum(s_list)
        average_score = total_score / total_players
        high_score = max(s_list)
        low_score = min(s_list)
        score_range = high_score - low_score
        print(f"Total players: {total_players}")
        print(f"Total score: {total_score}")
        print(f"Average score: {average_score}")
        print(f"High score: {high_score}")
        print(f"Low score: {low_score}")
        print(f"Score range: {score_range}")
    else:
        print("No scores provided. Usage: "
              "python3 ft_score_analytics.py <score1> <score2> ...")


if __name__ == "__main__":
    print("=== Player Score Analytics ===")
    s_list: list[int] = []
    if 1 < len(sys.argv):
        for arg in sys.argv[1:]:
            try:
                s_list.append(int(arg))
            except ValueError:
                print(f"Invalid parameter: '{arg}'")
    calculate_score(s_list)
