qtd_masc = qtd_fem = 0;
media_geral = media_masc = media_fem = 0.0

for i in range(4):
    print("Informe sua idade: ");
    idade = int(input());
    print("[M] - Masculino [F] - Feminino");
    print("Informe seu Sexo: ");
    sexo = input().upper();
    
    media_geral = media_geral + idade;
    
    match sexo:
        case 'M':
            qtd_masc+= 1;
            media_masc = media_masc + idade;
        case 'F':
            qtd_fem+= 1;
            media_fem = media_fem + idade;

media_geral = media_geral/(qtd_masc+qtd_fem);
media_masc = media_masc/qtd_masc;
media_fem = media_fem/qtd_fem;

print(f"A idade média do grupo é : {media_geral}");
print(f"A idade média Masculina é : {media_masc}");
print(f"A idade média Feminina é : {media_fem}");


