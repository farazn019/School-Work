#Created By Faraz Naseem..... 110009274..... November 22, 2019.

'''_______________________THIS IS PART TWO OF THE PROGRAM________________________'''


#The user is prompted to enter a string that is at least seven characters.
str1 = input("Please enter a string that is at least seven letters: ")
#A new variable is created to store the original string.
original_string = str1
first_element = str1[0]
last_element = len(str1) - 1

#The original string is printed.
print(str1)
#The list is modified before the first iteration of the while loop.
str1 = str1[1:last_element] + str1[last_element] + str1[0]

'''The condition set for the while loop is while the modified string 
is not equal to the original string.'''
while(str1 != original_string):
    #The modified string is printed.
    print(str1)
    #The modification continuosly occurs.
    str1 = str1[1:last_element] + str1[last_element] + str1[0]

#The final string (which is equal to the original string) is output.
print(str1)