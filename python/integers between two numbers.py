print('            DISPLAY INTEGERS BETWEEN TWO NUMBERS')
n=int(input('Enter a number from where you want to begin: '))
m=int(input('Enter a number where you want to end: '))
print(f'Numbers between {n} and {m} are:')
for number in range(n,m):
    print(number,end=" ")