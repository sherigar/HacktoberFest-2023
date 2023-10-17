from textblob import TextBlob

def Convert(string):
    li = list(string.split())
    return li
str1 = input("Enter your word :")
words=Convert(str1)
corrected_words = []

for i in words:
    corrected_words.append(TextBlob(i))
print("wrong words : ", words)
print("corrected words are : ")
for i in corrected_words:
    print(i.correct(), end=" ")

