#Created By Faraz Naseem.....110009274..... October 04, 2019.

#This is the solution for the second problem.

#The values of the two items in dollars are declared.
item_one = 39.75
item_two = 65.50

#The total price of item one after taxes is calculated.
transaction_one = (item_two * 0.07) + item_two
#The total price of item one is rounded to two decimal places.
transaction_one = round(transaction_one, 2)
#The total cost of Ann's transaction is output to the screen.
print("Ann's total cost after purchasing item two is, $" + str(transaction_one))

#The total price of item one and item two is calculated.
transaction_two = ((item_two * 0.07) + item_two) + ((item_one / 2 *0.07) + (item_one/2))
#The total price of Ann's second transaction is rounded to two decimal places.
transaction_two = round(transaction_two, 2)
#The total value of Ann's second transaction is output to the console.
print("Ann's total cost after purchasing item one and item two is, $" + str(transaction_two))

#The amount of money that Ann would have saved is calculated.
money_saved = (item_one + item_two) - ((item_one / 2) + item_two)
#The money that Ann saved is rounded to two decimal places.
money_saved = round(money_saved, 2)
#The money that Ann saved is output to the console.
print("The money saved before taxes after purchasing item one and item two is, $" + str(money_saved))
