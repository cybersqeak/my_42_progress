import sys
import typing

def save_file(filename:str):
    try :
        print(f"Accessing file '{filename}'")
        f : IO[str]= open(filename,mode = 'r')
        print("---\n")
        content= f.read()
        print(content)
        print("---")
        f.close()
        print(f"File '{filename}' closed.")
        return 
    except (FileNotFoundError,PermissionError) as e:
        print(f"Error opening file '{filename}': {e}")
        return

if __name__ =="__main__" :
    if (len(sys.argv) != 2):
        print(f"Usage: {sys.argv[0]} <file>")
    else :
        print(" === Cyber Archives Recovery ===")
        save_file(sys.argv[1])

