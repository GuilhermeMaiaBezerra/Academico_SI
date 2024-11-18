def faixa_etaria(idade):
    global faixa1, faixa2, faixa3, faixa4, faixa5;
    
    if idade <= 15:
        faixa1 += 1;
    elif 16 <= idade <= 30:
        faixa2 += 1;
    elif 31 <= idade <= 45:
        faixa3 += 1;
    elif 46 <= idade <= 60:
        faixa4 += 1;
    else:
        faixa5 += 1;

faixa1 = faixa2 = faixa3 = faixa4 = faixa5 = 0;

for i in range(15):
    print("Informe sua idade: ", end="");
    idade = int(input());
    faixa_etaria(idade);

print("Quantidade de pessoas por faixa etária:");
print(f"1º Faixa Etária: {faixa1}");
print(f"2º Faixa Etária: {faixa2}");
print(f"3º Faixa Etária: {faixa3}");
print(f"4º Faixa Etária: {faixa4}");
print(f"5º Faixa Etária: {faixa5}");
