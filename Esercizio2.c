#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char S[MAX];
    int risposta;
    int a=1;
    int occ=0;

    printf("vuoi fare coding(0) o deconding(1):");
    scanf("%d",&risposta);

            printf("inserire la stringa:");
            scanf("%s",&S);
            int lung = strlen(S);

    

    switch(risposta) //se l'utente digita 0  fa il coding se no il decoding
    {
        case 0:  //coding

        
        

        for(int I=0;I<lung;I++)
        {   

           
            if (S[I] == S[I+1])  //se il carattere nella cella sucessiva a quella che si prende in considerazione incremento il contatore 
            {
                a=a+1;
            }
            else    //nel caso non sia più uguale stampa il numero di volte in cui è stato ripetuto seguito dal carattere
            {
                
                printf("%d",a);
                printf("%c",S[I]);
                a=1;

               
            }

            
        }

        
        
        break;
        case 1:

            
        

        for(int I=0;I<=lung;I++)
        {
            

            

            if(S[I]>= '0' && S[I] <= '9')
            {
               
                occ = occ * 10 + S[I] - '0'; 
            }
            else
            {
                
                for(int J =0;J<occ;J++)
                {
                    printf("%c",S[I]);
                }
                
                

                occ = 0;

                
            }

        }  

        break;

    }


   return 0;

}






