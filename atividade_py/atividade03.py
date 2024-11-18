faturamento = 0.0;

for i in range(1, 6):
    
    print(f"Informe o nome do {i}º Cliente: ", end="");
    nome = input();
    print(f"Informe o valor gasto por {nome}: ", end="");
    valor_pago = float(input());

    faturamento = faturamento + valor_pago;

print(f"Faturamento {faturamento}R$ total da Loja");

if faturamento > 54000:

    total = faturamento - 54000;
    print(f"Superamos em {total}R$ faturamento da Loja B");
else:
    total = 54000 - faturamento;
    print(f"Faltou {total}R$ para superarmos o faturamento da Loja B");