def add(a, b):
    return int(a + b)

def sub(a, b):
    return int(a - b)

def mul(a, b):
    return int(a * b)

def div(a, b):
    try:
        if b != 0:
            return int(a / b)
        else:
            return "Division by zero is not allowed"
    except ZeroDivisionError:
        return "Division by zero is not allowed"

def user_choice():
    while True:
        print("Calculator Menu:")
        print("1. Addition")
        print("2. Multiplication")
        print("3. Subtraction")
        print("4. Division")
        print("5. Quit")

        user_input = input("Enter your choice (1-5): ")
        
        if user_input.isdigit():
            user_input = int(user_input)
            
            if 1 <= user_input <= 5:
                if user_input == 5:
                    print("Exiting the calculator. Goodbye!")
                    break

                a = int(input("Enter the first number: "))
                b = int(input("Enter the second number: "))

                try:
                    if user_input == 1:
                        result = add(a, b)
                        print("Result:", result)
                    elif user_input == 2:
                        result = mul(a, b)
                        print("Result:", result)
                    elif user_input == 3:
                        result = sub(a, b)
                        print("Result:", result)
                    elif user_input == 4:
                        result = div(a, b)
                        print("Result:", result)
                        if result == "Division by zero is not allowed":
                            print("Note: Division by zero is not allowed.")
                except Exception as e:
                    print(f"An error occurred: {e}")
                    
            else:
                print("Please enter a number between 1 and 5.")
        else:
            print("Please enter a valid number.")

user_choice()
