#Created By Faraz Naseem..... 110009274..... November 22, 2019.

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
