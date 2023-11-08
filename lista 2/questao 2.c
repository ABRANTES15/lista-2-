#include <stdio.h>

int main() {
  // Declaração de variáveis
  char nome_flamengo[30], nome_river[30];
  int forca_flamengo[11], forca_river[11];
  char posicao_flamengo[11], posicao_river[11];

  // Leitura da entrada
  for (int i = 0; i < 2; i++) {
    scanf(" %s", nome_flamengo + i);
    for (int j = 0; j < 11; j++) {
      scanf(" %s %c %d", posicao_flamengo + j, posicao_river + j, &forca_flamengo[j]);
      forca_river[j] = forca_flamengo[j];
    }
  }

  // Cálculo da força ponderada de cada time
  for (int i = 0; i < 2; i++) {
    float forca = 0;
    for (int j = 0; j < 11; j++) {
      if (posicao_flamengo[j] == 'G') {
        forca += 8 * forca_flamengo[j];
      } else if (posicao_flamengo[j] == 'L') {
        forca += 10 * forca_flamengo[j];
      } else if (posicao_flamengo[j] == 'Z') {
        forca += 5 * forca_flamengo[j];
      } else if (posicao_flamengo[j] == 'V') {
        forca += 8 * forca_flamengo[j];
      } else if (posicao_flamengo[j] == 'M') {
        forca += 11 * forca_flamengo[j];
      } else if (posicao_flamengo[j] == 'A') {
        forca += 12 * forca_flamengo[j];
      }
    }
    forca_flamengo[i] = forca / 100;
  }

  // Determinação do time mais forte
  char *time_mais_forte = nome_flamengo[0];
  if (forca_flamengo[1] > forca_flamengo[0]) {
    time_mais_forte = nome_flamengo[1];
  } else if (forca_river[1] > forca_river[0]) {
    time_mais_forte = nome_river[1];
  }

  // Impressão da saída
  printf("Força ponderada do Flamengo: %.2f\n", forca_flamengo[0]);
  printf("Força ponderada do River Plate: %.2f\n", forca_river[0]);
  printf("Time mais forte: %s\n", time_mais_forte);

  return 0;
}