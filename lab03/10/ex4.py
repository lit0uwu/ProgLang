a = "0"
b = "False"
c = " "     
d = ""     

if a:
    print('"0" - это True')

if b:
    print('"False" - это True')

if c:
    print('" " (пробел) - это True')

if not d:
    print('"" - это False')

print()
print("Проверка через bool():")
print(bool(a))
print(bool(b))
print(bool(c))
print(bool(d))