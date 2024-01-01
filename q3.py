#A simple, four-operation calculator program:
while True:
    choice = input("Do you want to continue? Enter 'y' or 'n': ")
    if choice.lower() == 'n':
        break

    n1 = float(input("Enter the first number: "))
    n2 = float(input("Enter the second number: "))
    operation = input("Enter the operation you wish to perform (+ - / *): ")

    if operation == '+':
        ans = n1 + n2
    elif operation == '-':
        ans = n1 - n2
    elif operation == '/':
        if n2 != 0:
            ans = n1 / n2
        else:
            print("Division by zero is not allowed.")
            continue
    elif operation == '*':
        ans = n1 * n2
    else:
        print("Invalid operation")
        continue

    print("The answer is", ans)
