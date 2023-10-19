#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main(int argc, char *argv[]) {
    char palavra[50] = "";
	char palavra_copia[50] = "";
    char *pt1;
    char *pt2;
    char *operacao;
    char soma = "+", divisao = "/", mult = "*", sub = "-"; 
    int num1, num2;
    
    gets(palavra);
    
	strcpy(palavra_copia, palavra);
    pt1 = strtok(palavra, "+/*-");
    //printf("%s\n", pt1); 
    num1 = atoi(pt1);
	while(num1){
		 pt2 = strtok(NULL, "+/*-");
		 break;
	} 
    num2 = atoi(pt2);
    
    printf("%d | %d", num1, num2);
    
    *operacao = strchr(palavra, soma);
    if(operacao!= NULL){
    	printf("%d",num1+num2);
	}else{
		printf("Não deu ");
	}
	
	*operacao = strchr(palavra, sub);
    if(operacao!= NULL){
    	printf("%d",num1-num2);
	}else{
		printf("Não deu ");
	}
	
	*operacao = strchr(palavra, mult);
    if(operacao!= NULL){
    	printf("%.2f",num1*num2);
	}else{
		printf("Não deu ");
	}
	*operacao = strchr(palavra, divisao);
    if(operacao!= NULL){
    	printf("%.2f",num1/num2);
	}else{
		printf("Não deu ");
	}
 

    return 0;
}

