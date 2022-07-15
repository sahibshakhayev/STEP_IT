#Task1
first_digit = int(input("Введите первую цифру: "))
second_digit = int(input("Введите вторую цифру: "))
third_digit = int(input("Введите третью цифру:: "))
result = (first_digit * 100) + (second_digit * 10 ) + third_digit
print("Число = " + str(result))

print("\n")
#Task2
number = int(input("Введите четырехзначное число: "))
first_digit = int(number/1000)
second_digit = int((number-(first_digit * 1000))/100)
third_digit = int(((number-(first_digit * 1000)) - (second_digit * 100))/10)
fourth_digit = int(number - (first_digit * 1000) - (second_digit * 100) - (third_digit * 10))
result = first_digit * second_digit * third_digit * fourth_digit
print("Результат = " + str(result))
print("\n")

meter = int(input("Метры: "))
sm = meter * 100
dm = meter * 10
mm = meter * 1000
mil = meter / 1609
print(str(sm) + " Сантиметров")
print(str(dm) + " Дециметров")
print(str(mm) + " Миллиметров")
print(str(mil) + " Миля")

print("\n")

#Task4
base = int(input("Размер основания: "))
height = int(input("Высота: "))
area = 0.5 * base * height
print("Площадь = " + str(area))
print("\n")

#Task5
number = int(input("Введите четырехзначное число: "))
first_digit = int(number/1000)
second_digit = int((number-(first_digit * 1000))/100)
third_digit = int(((number-(first_digit * 1000)) - (second_digit * 100))/10)
fourth_digit = int(number - (first_digit * 1000) - (second_digit * 100) - (third_digit * 10))
result = (fourth_digit * 1000)  + (third_digit * 100) + (second_digit * 10) + first_digit
print("Результат = " + str(result))
