#include <stdio.h>

int main() {
  // Declaração de variáveis
  int entrada[10], i, j, soma;

  // Leitura da entrada
  for (i = 0; i < 10; i++) {
    scanf("%d", &entrada[i]);
  }

  // Loop principal
  while (1) {
    // Imprime o conjunto atual
    printf("%d ", entrada[0]);
    for (i = 1; i < 10; i++) {
      printf("%d ", entrada[i]);
    }
    printf("\n");

    // Inicializa a soma
    soma = 0;

    // Calcula a soma dos elementos da janela deslizante
    for (i = 0; i < 9; i++) {
      soma += entrada[i];
      entrada[i] = soma;
    }

    // Verifica se o conjunto atual contém apenas um elemento
    if (soma == entrada[0]) {
      break;
    }
  }

  return 0;
}