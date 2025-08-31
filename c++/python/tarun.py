x=int(input("enter a number"))
if(x>=100):
    print("you are cleared for main exam")
    y=int(input("enter marks in main exam"))
    if(y>=80):
        print("you can give interview")
        z=int(input("enter marks in interview"))
        if(z>=80):
            print("you are cleared")
        else:
            print("you are fail in interview")
    else:
        print("you are fail in main exam")
else:
    print("you are fail in pre exam")
    
       

        

            