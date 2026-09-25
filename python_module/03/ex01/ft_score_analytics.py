import sys

def calculate_score(s_list):

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
    else :
       print("No scores provided. Usage: python3 ft_score_analytics.py <score1> <score2> ...")




if __name__ == "__main__":
    print(" === Player Score Analytics ===")
    if (1 <= len(sys.argv) - 1):
        s_list: list[int] = []

        for  arg in sys.argv[1:]:
            try:
                s_list.append(int(arg))
            except ValueError as e:
                print(f"Invalid Parameter: {arg}")
        calculate_score(s_list)

    else :
          print("No scores provided. Usage: python3 ft_score_analytics.py <score1> <score2> ...")
