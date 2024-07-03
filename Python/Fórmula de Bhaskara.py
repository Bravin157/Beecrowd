import math

a, b, c = map(float, input().split())

delta = (b ** 2) - 4 * a * c


if a != 0 and delta > 0:
    x1 = (-b + math.sqrt(delta)) / (2 * a)
    x2 = (-b - math.sqrt(delta)) / (2 * a)

    print("R1 =", "{:.5f}".format(x1))
    print("R2 =", "{:.5f}".format(x2))
else:
    print("Impossivel calcular")
