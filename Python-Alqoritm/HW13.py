# Task 1
import random

lts = []
count_negative = 0
count_positive = 0
count_zero = 0
for i in range(20):
    lts.append(random.randint(-100, 100))
for j in range(len(lts)):
    if lts[j] < 0:
        count_negative += 1
    elif lts[j] > 0:
        count_positive += 1
    elif lts[j] == 0:
        count_zero += 1
print("Резултаты: ")
print("Количество отрицательных чисел: " + str(count_negative))
print("Количество положительных чисел: " + str(count_positive))
print("Количество нулей: " + str(count_zero))
print("\n")
# Task 2
count = 0
lts2 = []
for i in range(10):
    lts2.append(int(input("Enter number " + str(i+1) + "/10 : ")))
number = int(input("Enter number for count: "))
for j in range(len(lts2)):
    if lts2[j] == number:
        count += 1
print("Число " + str(number) + " встречается в списке " + str(count) + " раза")
print("\n")
# Task 3
lts3 = []
sum = 0
mul = 1
for i in range(20):
    lts3.append(random.randint(-100, 100))
for j in range(len(lts3)):
    sum = sum + lts3[j]
    if lts3[j] < 0:
        mul = mul * lts3[j]
print("Сумма всех чисел: " + str(sum))
print("Произведение отрицательных чисел: " + str(mul))
