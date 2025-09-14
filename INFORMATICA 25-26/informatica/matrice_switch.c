/*Data una matrice di valori scambiare gli elementi della diagonale principale con la diagonale secondaria.*/
#include <stdio.h>
void stampa_mat(int m[3][3]);
void scambiaDiagonale(int m[3][3]);
int main(){
    int mat[3][3]={{1,2,3},
                  {7,8,9},
                  {4,5,6}};

    stampa_mat(mat);
    scambiaDiagonale(mat);
    stampa_mat(mat);
}
void stampa_mat(int m[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}
void scambiaDiagonale(int m[3][3]){
    for(int i=0;i<3;i++){
        int temp=m[i][i];
        m[i][i]=m[i][2-i];
        m[i][2-i]=temp;
    }
}