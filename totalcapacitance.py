def Series(c1, c2, c3):
    cf = (1/c1) + (1/c2) + (1/c3)
    TotalCap = (1/cf)
    print("The Total Capacitance in series is: " , TotalCap)

def Parallel(c1, c2, c3):
    TotalCap = c1 + c2 + c3
    print("The Total Capacitance in parallel is: " , TotalCap)

def main():
    c1 = float(input("Enter the first capacitance c1: "))
    c2 = float(input("Enter the second capacitance c2: "))
    c3 = float(input("Enter the third capacitance c3: "))

    choice = input("Are the capacitors connected in series or in parallel? Press S/s if in Series and P/p if in Parallel ")
    if(choice == 'S' or choice == 's'):
        Series(c1, c2, c3)
    elif(choice == 'P' or choice == 'p'):
        Parallel(c1, c2, c3)
    else:
        print("Invalid choice!")

main()


