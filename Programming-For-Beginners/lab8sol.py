#Created By Faraz Naseem..... November 20, 2019..... 110009274.

#The math library is imported.
import math 

#list 1 contains all numbers.
list1 = [7.512, 0, 6, 23.62, 1, -3, 9.777]
#list 1 is output to the console.
print("The list is, " +str(list1))

#The user is prompted for input, and that input is converted to an integer.
user_integer = input("Please enter an integer: ")
user_integer = int(user_integer)

#The user's input replaces the list's value at position 4.
list1.insert(3, user_integer)
#The updates list is printed.
print("The updated list is, " + str(list1))
sum_list = 0

for i in list1:
    sum_list += i
print("The sum of the list is, " + str(sum_list))

rounded_sum = math.ceil(sum_list)
print("The rounded sum of the list is, " + str(rounded_sum))

highest_element = list1[0]
lowest_element = list1[0]
range_list = len(list1) - 1
idx = 1
while(idx != range_list):
    if(highest_element < list1[idx]):
        highest_element = list1[idx]
    idx += 1
print("The highest element in the list is, " + str(highest_element))

idx = 1
while(idx != range_list):
    if(lowest_element > list1[idx]):
        lowest_element = list1[idx]
    idx += 1
print("The lowest element is, " + str(lowest_element))


reversed_list = list1[::-1]
print("The reversed list is, " + str(reversed_list))
