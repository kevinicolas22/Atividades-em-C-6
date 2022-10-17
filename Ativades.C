#include <stdio.h>

int main() {
//1
int numero, soma=0; 
    for(int i=1; i<=5 ; i++){
        printf("digite o %d numero: \n",i); 
        scanf("%d", &numero); 
			soma = soma + numero; 
		
    printf("O total da soma dos numeros foi: %d\n", soma);
  }


//2
int a, N, cont = 1;
float soma, media;
  
printf("Quantos números quer inserir?\n");
scanf("%d",&N);
soma = 0;

while (cont <= N){

printf("Insira um número inteiro :");
scanf("%d", &a);
soma = soma + a;
cont++;
}

media = soma / N; 
printf("Média = %.2f \n", media);  

  
//3  
int a, N, i;
float soma, media;
  
printf("Quantos números quer inserir?\n");
scanf("%d",&N);
soma = 0;

for (i = 1; i <= N; i++){

printf("Insira um número inteiro :");
scanf("%d", &a);
soma = soma + a;
}

media = soma / N; 
printf("Média = %.2f \n", media);

  
//4
int fat, n;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &n);

for(fat = 1; n > 1; n = n - 1)
fat = fat * n;

printf("\nFatorial calculado: %d", fat);
return 0;

//5
int fat = 1, n;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &n);

do{
  fat = fat * n;
  n = n - 1;
  } while (n > 1);

printf("\nFatorial calculado: %d", fat);


  //6
  for (int contador = 1; contador <= 5; ++contador) {
    if (contador == 3)

    printf("%d ", contador);
      break;
  }
  puts("");
  

  //7
  for (int contador = 1; contador <= 5; ++contador) {
    printf("%d ", contador);
      
if (contador == 3)
      continue;
  }
  
  puts("");*/
}

