#Created By Faraz Naseem..... November 13, 2019..... 110009274

#The inital values of list1 are declared.
list1 = [7.5, 10, 6, 23.2, 1, -3, 9.7]
#list1 is printed.
print(list1)

#The list is iterated.
for i, j in enumerate(list1):
    #Through every iteration the value at a specific index is printed.
    print(j)
    '''If the value of the list at a position is 10, 
    then the iteration will start all over again'''
    if(j is 10):
        continue
    elif(list1[i] % 1 is 0):
        #The element at position i is raised to the power of 3.
        list1[i] = j * j * j
    else:
        multiplication = 2 * j
        #The element is multiplied by 2.
        print("2 * " + str(j) +  " = " + str(multiplication))
    
#The final values of the list are printed.
print(list1)