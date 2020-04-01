#Created By Faraz Naseem..... November 27, 2019..... 110009274

#This is the function that calculates the angle of a regular polygon.
def calc_angle(n):
    #This is the formula for calculating the angle of a polygon.
    angle = (n - 2) * (180 / n)
    #The statement prints the value of each interior angle in the polygon.
    print("The interior angle of a regular polygon with " + str(n) + " sides is: " + str(angle))

#The main function.
def main():
    #The user is prompted for input, and their input is changed to an integer value.
    sides = input("Enter the number of sides in your polygon: ")
    num_sides = int(sides)
    calc_angle(num_sides)
    
#The main function is called.
main()
    