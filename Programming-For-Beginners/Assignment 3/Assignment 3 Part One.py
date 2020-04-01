#Created By Faraz Naseem..... 110009274..... November 22, 2019.

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