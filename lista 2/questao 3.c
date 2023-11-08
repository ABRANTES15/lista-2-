#include <stdio.h>

int main() {
  // Declaração de variáveis
  int matriz_a[4][4], matriz_b[4][4], matriz_resultado[4][4];
  char operacao[4];

  // Leitura da entrada
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &matriz_a[i][j]);
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &matriz_b[i][j]);
    }
  }
  scanf("%s", operacao);

  // Cálculo da matriz resultado
  if (strcmp(operacao, "soma") == 0) {
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        matriz_resultado[i][j] = matriz_a[i][j] + matriz_b[i][j];
      }
    }
  } else if (strcmp(operacao, "sub") == 0) {
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        matriz_resultado[i][j] = matriz_a[i][j] - matriz_b[i][j];
      }
    }
  } else if (strcmp(operacao, "mult") == 0) {
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        matriz_resultado[i][j] = 0;
        for (int k = 0; k < 4; k++) {
          matriz_resultado[i][j] += matriz_a[i][k] * matriz_b[k][j];
        }
      }
    }
  }

  // Impressão da saída
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%*d ", 4, matriz_resultado[i][j]);
    }
    printf("\n");
  }

  return 0;
}