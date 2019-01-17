#include <stdio.h>
#include <stdlib.h>

int** creeareMatrice(int n, int m, int *count){
    int i,j,x;
    int** matrice = (int**)calloc(n, n * sizeof(int*));
    for(i = 0; i < n; i++)
        matrice[i]=(int*)calloc(m, m * sizeof(int));
    printf("Numarul de elemente nenule:\n");
    scanf("%d", count);
    printf("Se citeste matricea in format Linie|Coloana|Valoare:\n");
    for(int k = 0; k < *count; k++){

        printf("Linie: ");
        scanf("%d",&i);
        printf("Coloana: ");
        scanf("%d",&j);
        printf("Element: ");
        scanf("%d",&x);

        matrice[i][j] = x;
    }
    printf("\n \n");
    return matrice;
}

int** inmultireMatrice(int** a, int** b, int n, int m){
    int i,j,x,sum;
    int** matrice = (int**)calloc(n, n * sizeof(int*));
    for(i = 0; i < n; i++)
        matrice[i]=(int*)calloc(m, m * sizeof(int));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            sum = 0;
            for(int k = 0; k < n; k++)
                sum = sum + a[i][k]*b[k][j];
            matrice[i][j]=sum;
        }
    return matrice;
}

void afisareMatrice(int** matrice, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            printf("%d ", matrice[i][j]);
        printf("\n");
    }
    printf("\n \n");
}



int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i, j;
    int k1,k2;
    int** a = creeareMatrice(n,m,&k1);
    int** b = creeareMatrice(m,n,&k2);
    afisareMatrice(a,n,m);
    afisareMatrice(b,n,m);
    int** rezultat = inmultireMatrice(a,b,n,m);
    afisareMatrice(rezultat,n,m);
    return 0;
}
