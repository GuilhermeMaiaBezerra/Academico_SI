def Votos(codigo):

    global votos_branco,votos_nulo,votos_candidato1,votos_candidato2;

    match codigo:
        case 0:
            votos_branco+= 1;
            print("Voto registrado com sucesso");
        case 1:
            votos_nulo+= 1;
            print("Voto registrado com sucesso");
        case 22:
            votos_candidato1+= 1;
            print("Voto registrado com sucesso");
        case 13:
            votos_candidato2+=2;
            print("Voto registrado com sucesso");
        case _:
            print("Voto Inválido");
    
    
votos_branco = votos_nulo = votos_candidato1 =votos_candidato2 = 0;

tipo = 0;

while tipo == 0:
    print("\nCandidatos a Presidência 2026");
    print("[0]  - Branco");
    print("[1]  - Nulo");
    print("[22] - Bolsonaro");
    print("[13] - Lula\n");
    print("Digite o código para votar: ",end="");
    codigo = int(input());

    Votos(codigo);
    print("============================");
    print("Deseja continuar ?\n[0] - Sim\n[1] - Não\nResposta: ", end="");
    tipo = int(input());


print("Total de Votos para cada Candidato");
print(f"Total de votos Bolsonaro: {votos_candidato1}");
print(f"Total de votos Lula: {votos_candidato2}");
print(f"Total de Votos nulos: {votos_branco}");
print(f"Total de Votos em Branco: {votos_nulo}");

