/*Esercizio:  */
	

#  include <stdio.h>
#  include <stdlib.h>
#  include <time.h>

	int main(){
    int n=0;
    int n2;
    int n3;
    int n4;

       srand(time(NULL));
         n=rand()%30+1;
      printf("%d", n);
     if(n>=1 && n<10){
        printf("\ngiochi a HOI4");
        n2=rand()%15+1;
         printf("\nil numero scelto è %d",n2);

        switch (n2)
        {
        case 1:
            printf("\ngiocherai con la germania");
         break;

         case 2:
         printf("\ngiocherai con l' italia");
         break;

         case 3:
         printf("\ngiocherai con il giappone");
         break;

         case 4:
         printf("\ngiocherai con la francia");
          break;

           case 5:
         printf("\ngiocherai con la polonia");
          break;

          case 6:
         printf("\ngiocherai con l' austria");
          break;

         case 7:
         printf("\ngiocherai con l' inghilterra");
          break;

         case 8:
         printf("\ngiocherai con la jugoslavia");
          break;

          case 9:
         printf("\ngiocherai con l' urss");
          break;

           case 10:
         printf("\ngiocherai con l' ungheria");
          break;

           case 11:
         printf("\ngiocherai con la grecia");
          break;

           case 12:
         printf("\ngiocherai con la turchia");
          break;

            case 13:
         printf("\ngiocherai con l'etiopia");
          break;

            case 14:
         printf("\ngiocherai con la cina");
          break;

             case 15:
         printf("\ngiocherai con gli stati uniti");
          break;

        

        
        default:
        printf("sei un negro");
         break;
        }
        
     }
     if(n>=10 && n<20){
        printf("\ngiochi a assasins'creed rouge");
     }
      if(n>=20 && n<=30){
        printf("\ngiochi a age of history 3");
        n3=rand()%3;
        printf("\nil numero scelto è %d", n3);
       if(n3==1){
         printf("\ngiocherai una campagna a tua scelta");
       }
       if(n3==2){
         printf("\ngiocherai uno scenario");
         }
          while(n3==0){
           n3=rand()%3;
           printf("\nil numero scelto è: %d", n3);
          }
         

          if(n3==2){

          n4=rand()%10;
         printf("\nil numero scelto è %d", n4);

              switch (n4){
            
              case 1:
              printf("\ngiochi con lo scenario: caduta delle civiltà");
              break;
         
              case 2:
              printf("\ngiochi con lo scenario: 1066");
              break;

              case 3:
               printf("\ngiochi con lo scenario: 1300");
              break;

              case 4:
              printf("\ngiochi con lo scenario: 1440");
             break;

              case 5:
              printf("\ngiochi con lo scenario: guerra dei trent'anni");
              break;
            
              case 6:
              printf("\ngiochi con lo scenario: era vittoriana");
             break;

             case 7:
              printf("\ngiochi con lo scenario: grande guerra");
             break;

             case 8:
             printf("\ngiochi con lo scenario: seconda guerra mondiale");
             break;

              case 9:
              printf("\ngiochi con lo scenario: mondo moderno");
             break;

              default:
             printf("\nciao");
             break;
            }
    }   } 
     
    }
	
  


	
	





