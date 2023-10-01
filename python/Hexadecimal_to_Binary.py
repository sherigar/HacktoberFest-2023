#function to convert the hexidecimal to binary
def convert(hex):
    #dictionary to hexadecimal codes
    hex_to_binary={'0':'0000',
                   '1':'0001',
                   '2':'0010',
                   '3':'0011',
                   '4':'0100',
                   '5':'0101',
                   '6':'0110',
                   '7':'0111',
                   '8':'1000',
                   '9':'1001',
                   'A':'1010',
                   'B':'1011',
                   'C':'1100',
                   'D':'1101',
                   'E':'1110',
                   'F':'1111'}
    binary=""
    for i in hex:
        #try except block to check for KeyError
        try:
            binary+=hex_to_binary[i]
        except KeyError:
            return "not found. Invalid hexadecimal number"
    return binary

def main():

    hex=input("Enter a hexadecimal number: ")
    print("The binary equivalent is",convert(hex))

main()



