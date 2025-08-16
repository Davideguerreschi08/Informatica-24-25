#include <studio.h>
intmain(){
int n;
int cnt;

do{
   printf("inserisci un numero: ");
   scanf("%d", &n);
   cnt++;
   if(n%2==1)
   n--;
   
   while(n!=0){
    printf("il numero inserito è: %d\n");
    n=n-2;
    
   

 }while(n<0);