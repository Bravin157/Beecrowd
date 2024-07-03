n1, n2, n3, n4 = map(float, input().split())

calculoMedia = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10

print("Media:", "{:.1f}".format(calculoMedia))

if calculoMedia >= 7.0:
    print("Aluno aprovado.")
elif calculoMedia < 5.0:
    print("Aluno reprovado.")
elif calculoMedia >= 5.0 and calculoMedia <= 6.9:
    print("Aluno em exame.")
    n5 = float(input("Nota do exame: "))
    calculoMedia1 = (n5 + calculoMedia) / 2
    if calculoMedia1 >= 5.0:
        print("Aluno aprovado.\nMedia final:", calculoMedia1)
    elif calculoMedia1 <= 4.9:
        print("Aluno reprovado.\nMedia final:", calculoMedia1)
