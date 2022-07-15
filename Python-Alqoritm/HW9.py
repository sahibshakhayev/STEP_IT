#Task1
number = int(input("Enter number (1-100): "))
if (number > 100 or number < 1):
    print("Incorrect Value")
elif(number % 3 == 0 and number % 5 == 0):
    print("Fizz Buzz")
elif (number % 3 == 0):
    print("Fizz")
elif (number % 5 == 0):
    print("Buzz")
else:
    print(number)

print("\n")
#Task2
number = int(input("Enter number: "))
op = int(input("Введите степень для возведение (0-7): "))
if (op > 7 or op < 0):
    print("Incorrect value")
if (op == 0):
    print(1)
if (op == 1):
    print(number)
if (op == 2):
    print(number * number)
if (op == 3):
    print(number * number * number)
if (op == 4):
    print(number * number * number * number)
if (op == 5):
    print(number * number * number * number * number)
if (op == 6):
    print(number * number * number * number * number * number)
if (op == 7):
    print(number * number * number * number * number * number * number)






print("\n")
#Task3
minutes = int(input("How many minutes you want call? "))
print(" 1. Bakcell to Azercell (0.5 AZN/min) ")
print(" 2. Bakcell to Nar (0.5 AZN/min) ")
print(" 3. Bakcell to Bakcell (0.2 AZN/min) ")
print(" 4. Azercell to Azercell (0.3 AZN/min) ")
print(" 5. Azercell to Bakcell (0.6 AZN/min) ")
print(" 6. Azercell to Nar (0.6 AZN/min) ")
print(" 7. Nar to Nar (0.1 AZN/min) ")
print(" 8. Nar to Bakcell (0.4 AZN/min) ")
print(" 9. Nar to Azercell (0.4 AZN/min) ")
op = int(input("Choose variant (1-9): "))
if (op > 9 or op < 1):
    print("Incorrect value")
if (op == 1):
    price = minutes * 0.5
if (op == 2):
    price = minutes * 0.5
if (op == 3):
    price = minutes * 0.2
if (op == 4):
    price = minutes * 0.3
if (op == 5):
    price = minutes * 0.6
if (op == 6):
    price = minutes * 0.6
if (op == 7):
    price = minutes * 0.1
if (op == 8):
    price = minutes * 0.4
if (op == 9):
    price = minutes * 0.4

print("Price: " + str(price) + " AZN")
print("\n")

#Task4
m1_work = int(input(" Sales of first manager ($): "))
m2_work = int(input(" Sales of second manager ($): "))
m3_work = int(input(" Sales of third manager ($): "))
if (m1_work <= 500):
    m1_salary = 200 + (m1_work*3/100)
elif (m1_work >= 500 and m1_work <= 1000):
    m1_salary = 200 + (m1_work * 5 / 100)
else:
    m1_salary = 200 + (m1_work * 8 / 100)
if (m2_work <= 500):
    m2_salary = 200 + (m2_work*3/100)
elif (m2_work >= 500 and m2_work <= 1000):
    m2_salary = 200 + (m2_work * 5 / 100)
else:
    m2_salary = 200 + (m2_work * 8 / 100)
if (m3_work <= 500):
    m3_salary = 200 + (m3_work*3/100)
elif (m3_work >= 500 and m3_work <= 1000):
    m3_salary = 200 + (m3_work * 5 / 100)
else:
    m3_salary = 200 + (m3_work * 8 / 100)

best = " All Managers is best"
if (m1_work > m2_work and m1_work > m3_work):
    best = " Best manager is first"
    m1_salary = m1_salary + 200

elif (m2_work > m1_work and m2_work > m3_work):
    best = " Best manager is second"
    m2_salary = m2_salary + 200
elif (m3_work > m1_work and m3_work > m2_work):
    best = " Best manager is third"
    m3_salary = m3_salary + 200
print("Results: ")
print(" Fist manager sales: " + str(m1_work) + "$ " + "and salary " + str(m1_salary) + "$")
print(" Second manager sales: " + str(m2_work) + "$ " + "and salary " + str(m2_salary) + "$")
print(" Third manager sales: " + str(m3_work) + "$ " + "and salary " + str(m3_salary) + "$")
print(best)



