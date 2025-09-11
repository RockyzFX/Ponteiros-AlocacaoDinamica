Projeto: Vetor Dinâmico e Estatísticas em C
Descrição
Este projeto implementa um programa em C que cria um vetor de inteiros com tamanho definido em tempo de execução, preenche com valores aleatórios e realiza diversas análises estatísticas sobre os dados. O objetivo é praticar o uso de ponteiros, alocação dinâmica e funções para manipulação eficiente de estruturas de dados.

Funcionalidades
Criação dinâmica de vetor de inteiros

Preenchimento automático com valores aleatórios (0 a 99)

Exibição dos valores do vetor

Cálculo da média dos valores

Identificação do maior e menor valor

Contagem e exibição de números pares

Contagem e exibição de números ímpares

Contagem e exibição de múltiplos de cinco

Liberação da memória alocada

Como executar
Compile o código:

bash
gcc "necio trabalho.c" -o programa
Execute o programa:

bash
./programa
Exemplo de saída
text
Todos os numeros: [12, 7, 25, 40, ...]
Media = 23.45
Maior Numero = 47
Menor Numero = 2
Numeros Pares: [12 40 ...]
Quantidade de pares: 10
Numeros Impares: [7 25 ...]
Quantidade de impares: 9
Multiplos de 5: [25 40 ...]
Quantidade de multiplos de cinco: 4
Estrutura das Funções
numbers_create(int size): Aloca dinamicamente um vetor de inteiros.

*numbers_read(int numbers, int size): Preenche o vetor com valores aleatórios.

*numbers_average(int numbers, int size): Calcula a média dos valores.

*maior_num(int numbers, int size): Retorna o maior valor do vetor.

*menor_num(int numbers, int size): Retorna o menor valor do vetor.

*num_pares(int numbers, int size): Conta e exibe os números pares.

*num_impares(int numbers, int size): Conta e exibe os números ímpares.

*multiplos_de_cinco(int numbers, int size): Conta e exibe os múltiplos de cinco.

*numbers_show(int numbers, int size): Exibe todos os valores do vetor.

*numbers_destroy(int numbers): Libera a memória alocada.

Requisitos
GCC ou outro compilador C

Sistema operacional compatível com C padrão

Autor
Caio Marcos Moita Mourão

Status do Projeto
🚧 Em desenvolvimento 🚧

Repositório
RockyzFX/Ponteiros-AlocacaoDinamica

Arquivo principal: necio trabalho.c
Informativo de Caio Marcos: Essa descrição foi gerada por I.A.
