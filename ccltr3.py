from math import sqrt

# akar kuadrat
a = float(input("masukkan nilai a: "))
b = float(input("masukkan nilai b: "))
c = float(input("masukkan nilai c: "))

x1 = (-b+sqrt(b**2-(4*a*c)))/(2*a)
x2 = (-b-sqrt(b**2-(4*a*c)))/(2*a)
print(f"akar kuadrat = {x1:.2f}")
print(f"akar kuadrat = {x2:.2f}") 