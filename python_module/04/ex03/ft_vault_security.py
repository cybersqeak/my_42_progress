
def secure_archive(filename:str, mode:str = 'r', content :str = "")->tuple[bool, str]:
    try:
        if (mode == 'r'):
            with open(filename,mode) as file:
                 text = file.read()
                 return True ,text
        elif (mode == 'w'):
            with open(filename,mode) as file:
                file.write(content)
                return True,"Content successfully written." 

    except (PermissionError,FileNotFoundError) as e:
        return False,str(e)
    return False,"Unknown action (It must be 'r' or 'w' )"






if __name__ == "__main__" :
    print("=== Cyber Archives Security ===")
    print(f"Using 'secure_archive' to read from a nonexsitent file:")
    print(secure_archive("/toilet/ghost.txt"))
    print(f"Using 'secure_archive' to read from an inaccesible file:")
    print(secure_archive("/secret_hobby.txt"))
    print(f"Using 'secure_archive' to read from a regular file:")
    result = secure_archive("fragment.txt")
    print(result)
    print(f"Using 'secure_archive' to write previous content to new file:")
    print(secure_archive("new.txt",'w',result[1]))
    
    
