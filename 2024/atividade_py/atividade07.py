contador = 0;

for i in range(1,11):
    print(f"Informe o {i}º número: ",end="");
    num = int(input());
    if num >= 30 and num <= 90:
        contador += 1;

print(f"Quantidade de numeros entre 30 e 90: {contador}");
