import sys

if __name__ == "__main__":
    print("=== Command Quest ===")
    print(f"Program name: {sys.argv[0]}")
    if 1 < len(sys.argv):
        print(f"Arguments received: {len(sys.argv) - 1}")
        num: int = 1
        for arg in sys.argv[1:]:
            print(f"Argument {num}: {arg}")
            num += 1
    else:
        print("No arguments provided!")
    print(f"Total arguments: {len(sys.argv)}")
