import sys
from typing import IO

def save_file(content:str):
     sys.stdout.write("Enter new file name (or empty): ")
     sys.stdout.flush()
     file_name = sys.stdin.readline().strip()
     if (file_name):
         sys.stdout.write(f"Saving data  to '{file_name}'\n")
         sys.stdout.flush()
         try:
             f:IO[str] =  open(file_name,mode = 'w')
             f.write(content)
             sys.stdout.write(f"Data saved in file '{file_name}'.\n")
             sys.stdout.flush()
             f.close()
         except (FileNotFoundError, PermissionError) as e:
             sys.stderr.write(f"Error opening file '{file_name}': {e}\n")
             sys.stdout.flush()
             sys.stdout.write("Not saving data.\n")
             sys.stderr.flush()
     else:
       sys.stdout.write("Not saving data.\n")
       sys.stdout.flush()

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
        sys.stderr.write(f"Error opening file '{filename}': {e}")
        sys.stderr.flush()
        return

if __name__ =="__main__" :
    if (len(sys.argv) != 2):
        print(f"Usage: {sys.argv[0]} <file>")
    else :
        print("=== Cyber Archives Recovery & Preservation ===") 
        open_file(sys.argv[1])

