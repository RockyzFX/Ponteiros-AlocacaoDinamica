#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração das funções
int *numbers_create(int size);
void numbers_read(int *numbers, int size); 
float numbers_average(int *numbers, int size);          
void numbers_show(int *numbers, int size); 
void numbers_destroy(int *numbers);        

int maior_num(int *numbers, int size);
int menor_num(int *numbers, int size);
int num_pares(int *numbers, int size);
int num_impares(int *numbers, int size);
int multiplos_de_cinco(int *numbers, int size);

// ===================================================================

int *numbers_create(int size) {
  int *num = NULL;
  num = (int *)malloc(size * sizeof(int));
  if (num == NULL)
    return NULL;
  return num;
}

void numbers_read(int *numbers, int size) {
  if (numbers != NULL) {
    for (int i = 0; i < size; i++)
      numbers[i] = rand() % 100;
  }
}

float numbers_average(int *numbers, int size) {
  float sum = 0.0;
  if (numbers != NULL)
    for (int i = 0; i < size; i++)
      sum += numbers[i];
  if (sum != 0)
    return sum / (float)size;
  return 0;
}

int maior_num(int *numbers, int size){
  int maior = numbers[0]; 
  for (int i = 1; i < size; i++) {
    if (numbers[i] > maior) {
      maior = numbers[i]; 
    }
  }
  return maior;
}

int menor_num(int *numbers, int size){
  int menor = numbers[0]; 
  for (int i = 1; i < size; i++) {
    if (numbers[i] < menor) {
      menor = numbers[i];
    }
  }
  return menor;
}

int num_pares(int *numbers, int size){
  int pares = 0;
  printf("Numeros Pares: [");
  for(int i = 0; i < size; i++){
    if(numbers[i] % 2 == 0){
      printf("%d ", numbers[i]);
      pares++;
    }
  }
  printf("]\n");
  return pares;
} 

int num_impares(int *numbers, int size){
  int impares = 0;
  printf("Numeros Impares: [");
  for(int i = 0; i < size; i++){
    if(numbers[i] % 2 != 0){
      printf("%d ", numbers[i]);
      impares++;
    }
  }
  printf("]\n");
  return impares;
}

int multiplos_de_cinco(int *numbers, int size){
  int multiplos = 0;
  printf("Multiplos de 5: [");
  for (int i = 0; i < size; i++) {
    if (numbers[i] % 5 == 0) {
      printf("%d ", numbers[i]);
      multiplos++;
    }
  }
  printf("]\n");
  return multiplos;
}

// ===================================================================

void numbers_show(int *numbers, int size) {
  printf("Todos os numeros: [");
  if (numbers != NULL) {
    for (int i = 0; i < size; i++)
      if (i == (size - 1))
        printf("%d", numbers[i]);
      else
        printf("%d, ", numbers[i]);
  }
  
  printf("]\n");
}

void numbers_destroy(int *numbers) { free(numbers); }

// ===================================================================

int main() {
  srand(time(NULL));
  int *numbers; 
  int size = rand() % 100;

  numbers = numbers_create(size);
  numbers_read(numbers, size);

  numbers_show(numbers, size);

  float avg = numbers_average(numbers, size); 
  printf("Media = %.2f\n", avg);

  int maior_numero = maior_num(numbers, size);
  printf("Maior Numero = %d\n", maior_numero);

  int menor_numero = menor_num(numbers, size);
  printf("Menor Numero = %d\n", menor_numero);

  int numeros_pares = num_pares(numbers, size);
  printf("Quantidade de pares: %d\n", numeros_pares);

  int numeros_impares = num_impares(numbers, size);
  printf("Quantidade de impares: %d\n", numeros_impares);

  int multiplos_cinco = multiplos_de_cinco(numbers, size);
  printf("Quantidade de multiplos de cinco: %d\n", multiplos_cinco);

  numbers_destroy(numbers);
  return 0;
}
