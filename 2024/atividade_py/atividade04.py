maior_idade = 0;

for i in range(1,11):
    
    print(f"Informe a idade do {i}º usuário: ",end="");
    idade = int(input());

    if idade >= 18:
        
        maior_idade+= 1;

print(f"{maior_idade} Usuários são maiores de 18 anos");