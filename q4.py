#Calculating the average of an integer list:

n = int(input("Enter the number of elements in the list: "))
elements = []
for i in range(n):
    num=int(input("enter number "))
    elements.append(num)
total = sum(elements)
average = total / n if n != 0 else 0
print("The average of the numbers is", average)
