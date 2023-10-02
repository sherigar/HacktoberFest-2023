def decimal_to_binary(n):
    if n == 0:
        return "0"
    binary = ""
    while n > 0:
        remainder = n % 2
        binary = str(remainder) + binary
        n = n // 2
    return binary

try:
    decimal_number = int(input("Enter a decimal number: "))
    if decimal_number < 0:
        print("Binary representation is not defined for negative numbers.")
    else:
        binary_representation = decimal_to_binary(decimal_number)
        print(f"Binary representation of {decimal_number} is: {binary_representation}")
except ValueError:
    print("Invalid input. Please enter a valid decimal number.")
