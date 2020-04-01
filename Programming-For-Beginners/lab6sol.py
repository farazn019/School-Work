#Created By Faraz Naseem.....110009274.....November 6, 2019.

#The count variable is declared and initalized to zero.
count = 0

#The empty list of colors is declared.
colors = []

'''The user is prompted, whether or not they would like to add colours.'''
enter = input("Would you like to enter up to three favourite colours: ")

#The 'user_colour' variable is set to an empty string.
user_colour = ""

'''While user input is 'y' and the count is less than three, the program will  continue to execute.'''
while((enter == 'y') and (count < 3)):
  user_colour = input("Please enter your favourite colour: ")
  #The colour is appended to the list.
  colors.append(user_colour)
  #The count variable is incremented by one.
  count += 1
  '''If the count variable is less than three, the user is continuously prompted for more input.'''
  if(count < 3):
    enter = input("Would you like to enter another colour: ")

'''The number of colours that the user entered is printed to the screen.'''
print("The user has entered " + str(count) + " colours.")

if(count >= 1):
  print("The colours that the user entered were: " + str(colors))
