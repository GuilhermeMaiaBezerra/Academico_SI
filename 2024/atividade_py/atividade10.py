def VerificarIdades(idade_temp):
    global menor_idade,maior_idade;

    if menor_idade > idade_temp or menor_idade == 0:
        menor_idade = idade_temp;
    elif maior_idade < idade_temp or maior_idade ==0:
        maior_idade = idade_temp;

def VerificarSalarioFem(sexo):
    global qtd_mulheres;
    match sexo:
        case 'f':
            if salario <= 1500.00:
                qtd_mulheres+= 1;

media_salario = 0.0;
menor_idade = maior_idade = qtd_mulheres = tipo = i = 0;

while tipo == 0:
    print("Informe sua idade: ", end="");
    idade = int(input());
    print("Informe seu sexo [M] ou [F]: ",end="");
    sexo = input();
    print("Informe seu salario: ",end="");
    salario = float(input());

    print("==================");
    media_salario = media_salario + salario;

    VerificarIdades(idade);
    VerificarSalarioFem(sexo); 

    i+= 1;

    print("Deseja continuar ?\n[0] - Sim\n[1] - Não\nResposta: ", end="");
    tipo = int(input());

media_salario = media_salario/i;

print(f"Média de salário do grupo: R$ {media_salario:.2f}");
print(f"Maior idade: {maior_idade} Menor idade: {menor_idade}");
print(f"Mulheres com salário até R$1.500,00: {qtd_mulheres}");



