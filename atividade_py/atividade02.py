def OrdemValores(a, b, c):

    if a > b and a > c:
        maior = a;
        if b > c:
            meio = b;
            menor = c;
        else:
            meio = c;
            menor = b;
    elif b > a and b > c:
        maior = b;
        if a > c:
            meio = a;
            menor = c;
        else:
            meio = c;
            menor = a;
    elif c > a and c > b:
        maior = c;
        if a > b:
            meio = a;
            menor = b;
        else:
            meio = b;
            menor = a;

    return menor, meio, maior;


print("Informe Três valores (A, B, C)");
a = int(input("Valor de A: "));
b = int(input("Valor de B: "));
c = int(input("Valor de C: "));

menor, meio, maior = OrdemValores(a, b, c);

print("Ordem Crescente (A, B, C):");
print(f"{menor} , {meio} , {maior}");

print("Ordem Decrescente (A, B, C):");
print(f"{maior} , {meio} , {menor}");
