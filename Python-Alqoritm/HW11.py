# Task1
word = input("Enter word for test: ")
reversed_word = ""
for i in range(1, len(word) + 1):
    reversed_word = reversed_word + word[-i]
if reversed_word == word:
    print("Yes its Polygon!")
else:
    print("No its not Polygon!")
print("\n")
# Task2
text = '''
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer sit amet metus id libero blandit congue. Pellentesque at blandit nisi, in consectetur turpis. Nam gravida dictum lacus vitae vehicula. Nunc lacinia neque nec arcu condimentum, imperdiet gravida nibh vulputate. Ut hendrerit orci hendrerit efficitur hendrerit. Phasellus nec gravida nibh, in vestibulum nunc. Aliquam sodales eros lobortis erat molestie, et commodo enim tempor. Maecenas non sapien interdum, accumsan mauris ac, tempus tellus. Phasellus ac molestie turpis, vel tincidunt elit. Fusce sagittis a dolor vel dictum. Sed ac mi dui. Fusce vitae nisl laoreet, dapibus nulla non, dignissim dui.

Cras ex diam, rhoncus a pretium sit amet, euismod vel purus. Fusce nisi mi, interdum sit amet accumsan a, cursus sed dui. Donec elit nisl, elementum convallis ex vel, hendrerit aliquet sem. In non lobortis justo. Curabitur elementum tortor neque, non iaculis ex porttitor ut. Nulla dolor dolor, tempus vel venenatis ac, ullamcorper at eros. Curabitur tincidunt eu est sit amet convallis. Aliquam euismod non orci nec congue. Donec pharetra sapien metus, eu consectetur neque scelerisque non. Praesent velit elit, posuere et placerat at, ultrices vitae lectus. Phasellus id libero at elit iaculis posuere eu at elit. Nunc ex neque, accumsan eget congue sed, pulvinar eu magna. Sed porta convallis risus. Maecenas eget aliquam lectus, vel ullamcorper risus. Proin varius dolor purus, vel rhoncus purus varius vulputate.

Morbi vitae nisl dignissim, pulvinar elit id, ornare mauris. Nunc rhoncus congue neque non mattis. Etiam mattis neque leo, in tincidunt purus molestie non. Morbi molestie dolor eu finibus vestibulum. Quisque tincidunt nulla at turpis pharetra fringilla. Praesent aliquam mattis rutrum. Fusce egestas et massa eget finibus. Curabitur pellentesque arcu non sagittis gravida. Praesent dapibus enim in sem varius, sit amet tincidunt arcu vehicula. Cras sed hendrerit mi. Sed nibh quam, malesuada vel consequat at, luctus vel leo. Vivamus tincidunt sodales velit, vel vehicula justo accumsan non. Pellentesque elementum consequat eleifend. Duis ac justo vitae justo bibendum maximus tincidunt ut est. Maecenas ornare fermentum pretium. Vivamus egestas justo ipsum, volutpat molestie elit maximus id.

Vivamus aliquam nibh et nisi porta varius. Morbi lectus turpis, porta eget eros a, mattis blandit nisi. Phasellus porttitor quam sed erat iaculis finibus ut dictum tellus. Aliquam ut ultricies est, eu sollicitudin libero. Ut sit amet tincidunt nulla, ac pulvinar augue. Aenean ante mauris, convallis non laoreet eu, interdum id quam. Nullam pulvinar nibh id justo cursus, sit amet scelerisque lorem facilisis. Ut lacinia eros sed blandit mollis. Nullam convallis tortor egestas erat suscipit vestibulum. Morbi rhoncus, urna eget blandit feugiat, augue nulla suscipit eros, a aliquam lorem ante egestas velit. Nulla tempor eu massa et tempus. Nunc vitae semper leo.

Quisque augue velit, tincidunt at sodales et, blandit consectetur mauris. Sed vel sem bibendum, varius tellus et, hendrerit velit. Suspendisse vitae mi sit amet orci sagittis suscipit dictum quis lacus. Pellentesque et nisi lorem. Curabitur consequat justo vel odio vehicula malesuada. Aliquam erat volutpat. Suspendisse ullamcorper, nisi vel viverra auctor, elit quam efficitur lectus, ut gravida nisi sapien vitae felis. Sed euismod quis metus a pretium. Cras sollicitudin lobortis aliquam. Mauris convallis ultrices est mattis accumsan. Praesent a interdum lectus. Sed non urna ac sem eleifend dignissim. Nulla vitae odio ac ante convallis sodales vel vel urna.
'''
count = 0
for i in range(len(text)):
    if text[i] == ".":
        count += 1
print(count)
print("\n")
# Task3
count = 0
for i in range(len(text)):
    if text[i] == "a":
        count += 1
print(count)
print("\n")
# Task4
math_p = input("Input Math Problem (+ , - ,  * , /): ")
operand1 = ""
operator = ""
operand2 = ""
result = 0
for i in range(len(math_p)):
    if math_p[i] == "+" or math_p[i] == "-" or math_p[i] == "*" or math_p[i] == "/":
        operator = math_p[i]
        operator_pos = i;
        for j in range(operator_pos):
            operand1 += math_p[j]
        for k in range(operator_pos + 1, len(math_p)):
            operand2 += math_p[k]
if operator == "+":
    result = int(operand1) + int(operand2)
    print("Result: " + str(result))
elif operator == "-":
    result = int(operand1) - int(operand2)
    print("Result: " + str(result))
elif operator == "*":
    result = int(operand1) * int(operand2)
    print("Result: " + str(result))
elif operator == "/":
    if operand2 != "0":
        result = int(operand1) / int(operand2)
        print("Result: " + str(result))
    else:
        print("You can't divide to zero!")
else:
    print("Invalid operation!")
print("\n")
# Task5
text_h = input("Enter text with 'h' (minimum two 'h'): ")
part1 = ""
part2 = ""
h_last = 0
i = 0
while text_h[i] != "h":
    part1 += text_h[i]
    i += 1
for i in range(len(text_h)):
    if text_h[i] == "h":
        h_last = i
for j in range(h_last + 1, len(text_h)):
    part2 += text_h[j]

print(part1 + part2)
