# Task1
user_input = input("Input string for test: ")
if user_input[::-1].lower().replace(" ", "") == user_input.lower().replace(" ", ""):
    print("Yes its Polygon!")
else:
    print("No its not Polygon!")
print("\n")
# Task2
user_input = input("Input string for count: ")
count_letter = 0
count_number = 0
for i in range(len(user_input)):
    if user_input[i].isalpha():
        count_letter += 1
    elif user_input[i].isnumeric():
        count_number += 1
print("Количество букв: " + str(count_letter))
print("Количество чисел: " + str(count_number))
print("\n")
# Task 3
user_text = input("Input text: ")
user_word = input("Input a word: ")
print(user_text.replace(user_word, user_word.upper()))
print("\n")
# Task 4
text = '''
мне было 22 года, когда я попросил своего отца дать мне шанс попробовать себя в деле, которое мне нравится. работать у своего отца, который директор компании — самый легкий способ, но он меня не устраивал и не удовлетворял моих амбиций.
я только добавил при этом, что, если у меня что-то не получится, я вернусь, и признаюсь, что я дурак. но в глубине души я знал, что не смогу прийти к отцу с опущенной головой и признать свое поражение, — какой я после этого мужчина?!".
'''
# 1
start = 0
sentence = ""
edited_text = ""
for i in range(text.count(".")):
    sentence = text[start:text.find(".", start, len(text)) + 1].strip().capitalize()
    edited_text += sentence + " "
    start = text.find(".", start, len(text)) + 1
print(edited_text)
print("\n")
# 2
count_punctuation_marks = text.count(".") + text.count(",") + text.count(":") + text.count(";") + text.count("?") + text.count("!")
print("Знаки препинания встречаются " + str(count_punctuation_marks) + " раз")
# 3
print("В тексте " + str(text.count("!")) + " восклицательных знака")