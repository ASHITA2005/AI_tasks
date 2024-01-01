#Making a tuple of 5 fruits, making a copy, and adding another fruit to it

fruits=[]
for i in range(5):
    fruit=input("enter fruit ")
    fruits.append(fruit)

copy_fruits = list(fruits)
new_fruit = input("Enter the 6th fruit to add: ")
copy_fruits.append(new_fruit)
print("The new list of fruits is", copy_fruits)
