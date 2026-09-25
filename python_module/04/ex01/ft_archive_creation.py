import sys
from typing import IO

def save_file(content:str):
    file_name = input("Enter new file name (or empty): ")
    if (file_name):
        try:
            print(f"Saving data  to '{file_name}'")
            f:IO[str] =  open(file_name,mode = 'w')
            f.write(content)
            print(f"Data saved in file '{file_name}'.")
            f.close()
        except (FileNotFoundError, PermissionError) as e:
            print(f"Error opening file {e}")
    else:
      print("Not saving data.")

        


def add_char(content:str):
        print("\nTransform data:")
        new_content = content.replace("\n","#\n")
        print("---\n")
        print(new_content)
        print("---")
        save_file(new_content)

def open_file(filename:str):
    try :
        print(f"Accessing file '{filename}'")
        f:IO[str]= open(filename,mode = 'r')
        print("---\n")
        content= f.read()
        print(content)
        print("---")
        f.close()
        print(f"File '{filename}' closed.")
        add_char(content)
        return 
    except (FileNotFoundError,PermissionError) as e:
        print(f"Error opening file '{filename}': {e}")
        return

if __name__ =="__main__" :
    if (len(sys.argv) != 2):
        print(f"Usage: {sys.argv[0]} <file>")
    else :
        print(" === Cyber Archives Recovery ===")
        open_file(sys.argv[1])

