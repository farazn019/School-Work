#Created By Faraz Naseem..... November 22, 2019.

'''__________________________THIS IS PART ONE OF THE PROGRAM_________________________'''

#Three variables: total, maxx, and count are initalized to zero.
total = 0
maxx = 0
count = 0
integer_list = []

value = True
#For the while loop to run, 'True' was assigned to the value variable.
while(value == True):
    #The user is prompted for input to enter a number in digits only.
    user_input = input("Please enter a number in digits only: ")
    
    #If the user enters the input in digits only, then the number is printed.
    if(user_input.isdigit()):
        num = int(user_input)
        print("The current number is, " + str(num))
        #The total is printed which is: the previous total in addition to the current number.
        total = total + num
        
	#The count variable is incremented by 1.
        count += 1
        if(int(num) > maxx):
            '''If the user input number is greater than 'maxx', then the user
	    input number is assigned the maximum value.'''
            maxx = num
	    #The maximum value is output to the console.
            print("The value of max is, " + str(maxx))
            
        if(num > 0):
            integer_list.append(num)
    else:
        value = False

#This prints the 'count' variable's value.
print('Count = ' + str(count))


#The total variable is assigned a value of zero.    
total = 0
#If i is a digit, then it is added to the total sum.
for i in integer_list:
    total += i
print("Sum = " +str(total))

average = total / count
print("Average = " + str(average))


print("Max = " + str(maxx))





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





'''_______________________THIS IS PART THREE OF THE PROGRAM______________________________'''


#A list containing many different values is declared.
L1 = [2, 15, 'Carol', 7.4, 0, -10, -6, 42, 27, -1, 2.0, 'hello', [2, 4], 23]
#An empty list named 'odd' is initalized.
odd = []
#An empty list named 'even is initalized'.
even = []

'''A computation is performed through every iteration, to determine if a specific
element in L1 belongs to the even or odd list.'''
for i in L1:
    if(type(i) == int) and (i % 2 != 0):
        odd.append(i)
    elif((type(i) == int) and (i % 2 == 0)):
        even.append(i)
    
#The odd list along with it's values are printed out.
print("The odd numbers are: " + str(odd))
#The even list along with it's values is printed out.
print("The even numbers are: " + str(even))
("The odd list is, " + str(odd))