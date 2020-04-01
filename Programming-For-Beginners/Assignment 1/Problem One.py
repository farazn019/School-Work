#Created By Faraz Naseem..... 110009274..... October 04, 2019

#This is the solution to the first problem.

#The variables x, y, and z have the values: -7.58, 24, 6.5678.
x = -7.58
y = 24
z = 6.5678

#This statements print out the values of: x, y, and z.
print("The value of 'x' is, " + str(x))
print("The value of 'y' is, " + str(y))
print("The value of 'z' is, " + str(z))

#This evaluates the expression: (x**3) + (y*(z+30)) / ((y-x)-z)
arithmetic_expression = ((x ** 3) + (y*(z + 30))) / ((y - x) - z)

#This prints the value of the arithmetic expression that was solved above.
print("The value of the arithmetic expression is, " + str(arithmetic_expression))
