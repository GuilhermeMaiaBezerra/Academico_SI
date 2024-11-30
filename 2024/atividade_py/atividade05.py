print("Informe um número inteiro: ", end="");
num = int(input());

for i in range(1,num+1):
    
    tipo = i % 2;
    
    if(tipo == 0):
        print(f"{i} Par");
    else:
        print(f"{i} Ímpar");

