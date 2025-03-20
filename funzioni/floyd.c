/*esercizio:sviluppare un programma in c che stampi il triangolo di floyd
N=5
1
2 3
4 5 6 
7 8 9 10 
11 12 13 14 15 */

#include<stdio.h>

	void T_floyd(int *_num);
		
	

int main(){
	int n=0;
	do{
		printf("inserisci un numero: ");
		scanf("%d",&n);
	}while(n<=0);
	T_floyd(&n);
	return 0;
}

	void T_floyd(int *_num){
		
		int cnt=1;
		for(int i=1; i<=*_num;i++){
			for(int j=1;j<=i;j++){
				cnt++;
				printf("\n%d", cnt);
				printf("\t");
			}
			
		}
	}