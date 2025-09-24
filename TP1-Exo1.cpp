#include <stdio.h>

int main() {
    int i, j;
    int rows, cols;
  printf("Addition de deux matrices \n");
  // Saisie de la taille des matrices
    printf("Entrez le nombre de lignes :");
    scanf("%d", &rows);
    printf("Entrez le nombre de colonnes :");
    scanf("%d", &cols);
	int A[rows][cols], B[rows][cols], C[rows][cols];
 // Saisie de la première matrice
    printf("\n--- Saisie de la matrice A ---\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
 // Saisie de la deuxième matrice
    printf("\n--- Saisie de la matrice B ---\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
 // Addition des matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
 // Affichage du résultat
    printf("\n=== Résultat : A + B ===\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
	return 0;
}

