def encrypt(text, n):
    encrypted = ""
    for char in text:
        if char.isupper():
            c = ord(char) + (n % 26)
            if c > ord('Z'):
                c -= 26
        elif char.islower():
            c = ord(char) + (n % 26)
            if c > ord('z'):
                c -= 26
        else:
            c = ord(char) + 1
        encrypted += chr(c)
    return encrypted

def decrypt(text, n):
    decrypted = ""
    for char in text:
        if char.isupper():
            c = ord(char) - (n % 26)
            if c < ord('A'):
                c += 26
        elif char.islower():
            c = ord(char) - (n % 26)
            if c < ord('a'):
                c += 26
        else:
            c = ord(char) - 1
        decrypted += chr(c)
    return decrypted

def main():
    text = input("Enter a string: ")
    n = int(input("Enter key: "))
    encrypted_string = encrypt(text, n)
    print("\nEncrypted text:", encrypted_string)
    decrypted_string = decrypt(encrypted_string, n)
    print("Decrypted text:", decrypted_string)

if __name__ == "__main__":
    main()
