#include <stdio.h>


//pi22 Conta Palavras # int contaPal (char s[])
int main()
{
    char string[50];
    int i, fpal=0, num=0; //fpal== flag da palavra (esta ou nao numa palavra)
    
    printf("Introduz a frase: \n");
    scanf("%s",string);
    
    for(i=0; string[i]!='\0';i++) {
        
        if(!fpal && string[i]!=' ') {
                fpal=1;
                num++;
        }
        else 
        	if(fpal && string[i]==' ')
                fpal=0;
    }

    printf("Num: %d\n",num);
    
    return 0;
}