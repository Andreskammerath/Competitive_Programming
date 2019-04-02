#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// argc: es el numero de parametros contando el nombre del ejecutable
// char *argv[]: Un arreglo que contiene todos los parámetros recibidos.
int main(int argc, char *argv[]) 
{ 
    if (argc != 2) 
	{
        printf("Error.......");
        return 1;
    }
    else
	{	
		char *word = argv[1];
		int n = strlen(word);
		int i = 0;
		bool b = true;
		while(b && i < n/2)
		{
			b = (word[i] == word[n-1-i]);
			++i;					
		}	
		printf("%u \n",b);		
		return 0;		
	} 
}
