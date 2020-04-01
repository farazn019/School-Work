#Created By Faraz Naseem.....110009274.....October 04, 2019.

#This is the solution for the third problem.

#The inital velocity of the object is set to 15 m/s.
inital_velocity = 15
#The acceleration of the object is set to 2.5 m/s**2.
acceleration = 2.5
#The time that the object takes is initally set to 18 seconds.
time = 18
#The final velocity of the object is calculated.
final_velocity = inital_velocity + (acceleration * time)
#The final velocity of the object is output.
print("The final velocity of the object is, " + str(final_velocity) + " m/s.")

#The inital velocity is changed because the object is at rest.
inital_velocity = 0
#The final velocity of the object has been changed to 100m/s.
final_velocity = 100
#The acceleration of the object is set to 2.5m/s**2.
acceleration = 2.5
#The time of that the object takes is calculated.
time = (final_velocity - inital_velocity) / acceleration
#The time is output to the screen.
print("The time it takes to reach a final velocity of 100 m/s with an acceleration of 2.5 m/s**2 from rest is, " + str(time) + " seconds.")