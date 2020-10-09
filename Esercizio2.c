#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char S[MAX];
    int risposta;
    int a=1;

    printf("vuoi fare coding(0) o deconding(1),figa!");
    scanf("%d",&risposta);

    

    switch(risposta) //se l'utente digita 0  fa il coding se no il decoding
    {
        case 0:  //coding

        printf("inserire la stringa:");
        scanf("%s",&S);

        int lung = strlen(S); //inserisco nella variabile lun il numero di celle dell'arrey di caratteri

        

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
        case 1:  //decoding

        break;

    }


    



   return 0;
}






