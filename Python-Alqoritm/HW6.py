#Task1
day_number = int(input(" Введите номер дня недели (1-7) "))
if day_number == 1:
    print(" Понеделник")
if day_number == 2:
    print(" Вторник")
if day_number == 3:
    print(" Среда")
if day_number == 4:
    print(" Четверг")
if day_number == 5:
    print(" Пятница")
if day_number == 6:
    print(" Суббота")
if day_number == 7:
    print(" Воскресение")
if day_number < 1:
    print(" Неверное значение")
if day_number > 7:
    print(" Неверное значение")

print("\n")
#Task2
month = int(input(" Введите номер месяца (1-12) "))
if month == 1:
    print(" Январь")
if month == 2:
    print(" Февраль")
if month == 3:
    print(" Март")
if month == 4:
    print(" Апрель")
if month == 5:
    print(" Май")
if month == 6:
    print(" Июнь")
if month == 7:
    print(" Июль")
if month == 8:
    print(" Август")
if month == 9:
    print(" Сентябрь")
if month == 10:
    print(" Октябрь")
if month == 11:
    print(" Ноябрь")
if month == 12:
    print(" Декабрь")
if month < 1:
    print(" Неверное значение")
if month > 12:
    print(" Неверное значение")

print("\n")
#Task3
number = int(input(" Введите число: "))
if number > 0:
    print(" Number is positive ")
if number < 0:
    print(" Number is negative ")
if number == 0:
    print(" Number is equal to zero ")

print("\n")

#Task4
number1 = int(input(" Введите первое число: "))
number2 = int(input(" Введите второе число: "))
if number1 == number2:
    print(" Числа равны")
else:
    print(" Числа не равны")
    if number1 > number2:
        print(number2)
        print(number1)
    if number2 > number1:
        print(number1)
        print(number2)



