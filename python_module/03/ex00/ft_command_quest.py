




import sys 


if __name__ == "__main__":
    print(" === Command Quest === ")
    print(f"Program Name : {sys.argv[0]}")
    if ( 1 <= len(sys.argv) - 1):
        print(f"Arguments received: {len(sys.argv) - 1}")
        for num, arg in enumerate(sys.argv[1:], start = 1):
            print(f"Argmument {num}: {arg}")
    else :
        print("No arguments provided!")
        
    
    print(f"Total arguments: {len(sys.argv)}")

#if __name__ == "__main__":
 #   print(" === Command Quest === ")
  #  print(f"Program Name : {sys.argv[0]}")
   # if ( 1 <= len(sys.argv) - 1):
    #    print(f"Arguments received: {len(sys.argv) - 1}")
     #   try:
      #      num = 1
       #     for i in sys.argv[1:] :
                
        #        print(f"Argument {num} : {i}")
         #       num += 1
        #except IndexError as e:
         #   print(f"Caught An Error at Index:  {e}")
 #   else :
  #      print("No arguments provided!")
        
    
    #print(f"Total arguments: {len(sys.argv)}")
