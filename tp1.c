
#include <stdio.h>

int main() {
    int Mat[4][4];
    int i, j, K;

    printf("Donnez les elements de la matrice [4][4] :\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Mat[%d][%d] = ", i, j);
            scanf("%d", &Mat[i][j]);  
        }
    }

    
    printf("Matrice originale :\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%3d ", Mat[i][j]);
        }
        printf("\n");
    }


    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 4; j++) {
           K = Mat[i][j];
            Mat[i][j] = Mat[j][i];
            Mat[j][i] =K;
        }
    }


printf("Afficher le Mat[i][j]:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 ; j++) {
       
            printf("%3d ", Mat[i][j]);
      
        }
        printf("\n");
    }

    return 0;
}



