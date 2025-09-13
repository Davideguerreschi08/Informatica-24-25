/*Data una matrice di valori scambiare gli elementi della diagonale principale con la diagonale secondaria.*/
#include <stdio.h>
int main(){
    int mat[3][3]={{1,2,3},
                  {7,8,9},
                  {4,5,6}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        int temp=mat[i][i];
        mat[i][i]=mat[i][2-i];
        mat[i][2-i]=temp;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}