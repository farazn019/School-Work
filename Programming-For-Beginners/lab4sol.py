#Created By Faraz Naseem..... 110009274..... October 09, 2019.

#The list and all it's contents is created.
list1 = [['Rose', 'Daisy'], 7, 0, 5.5, [1, 22, 2.45, 3, 6, 5.8]] 

#The list is printed.
print("list1 = " + str(list1))

#The length of the list is calculated and printed.
length_list = len(list1)
print("list1 has, " + str(length_list) + " items.")

#The first letter of the first string in the list is output to the console.
print("The first letter of the list is, " + str(list1[0][0][0]))

#The sum of the last 4 integers is calculated and output.
sum_integers = list1[4][-4]+ list1[4][-3] + list1[4][-2] + list1[4][-1]
print("The sum of the last 4 integers in the list is, " + str(sum_integers))

#The list is expanded by appending: apple , pear , and grape.
list1.append(['apple', 'pear', 'grape'])

#The updated list is printed out.
print("The updated list (list1) is, " + str(list1))

#f2200d07-c5f3-4020-984a-3feb13b6d9eb
