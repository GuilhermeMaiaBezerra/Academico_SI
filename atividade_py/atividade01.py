print("Informe um número: ",end="");

num = int(input())

for i in range(1,11):
 resultado = num*i;
 print(f"{num} x {i} = {resultado}");
 i+=1;
