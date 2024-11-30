maior_cinquenta = 0;
qtd_adolecentes = 0;
media_altura = 0.0;
porcentagem_peso = 0.0;

for i in range(1,26):
    print(f"Dados {i}º Pessoa");
    print("Informe sua Idade:", end="");
    idade = int(input());
    print("Informe sua Altura:", end="");
    altura = float(input());
    print("Informe seu Peso:", end="");
    peso = float(input());

    if idade > 50:
        maior_cinquenta+= 1;
    elif idade >=10 and idade <=20:
        qtd_adolecentes+= 1;
        media_altura = media_altura + altura;

    if peso < 40:
        porcentagem_peso += 1;

    print("======================");

porcentagem_peso = (porcentagem_peso/25) * 100;
media_altura = media_altura/qtd_adolecentes;

print(f"Número de pessoas com idade superior a 50 anos: {maior_cinquenta}");
print(f"Média das Alturas com idade entre 10 e 20 anos: {media_altura:.2f}");
print(f"Porcentagem com peso inferior a 40 quilos: {porcentagem_peso}%");
