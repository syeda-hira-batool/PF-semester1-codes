import math

def CalElectricFlux(ElectricField, Area, theta):
    return ElectricField * Area * math.cos(theta)

def main():
    ElectricField = float(input("Enter magnitude of electric field: "))
    Area = float(input("Enter area A in meters squares: "))
    theta = float(input("Enter angle theta between Electric Field lines and area vector in radians: "))
    flux = CalElectricFlux(ElectricField, Area, theta)
    print("Electric flux = ", flux ," N·m^2/C" )


main()
