#Counting the number of characters in a string without using len()
s = input("Enter a string: ")
count = 0
for char in s:
    count += 1
print("The length of the string is", count)
