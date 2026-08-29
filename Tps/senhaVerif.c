// dependencias
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h> 
#define null NULL


//------------funcao auxl------------------

/*
   funcao para verirficar quando a palavra FIM for escrita
 */

bool theEnd ( char str [  ] )
{

	if ( str == NULL )
	{
		return 0;
	}

	bool end = false;
	int size = length ( str );

	if ( size   >=  3   && 
			str[0] == 'F' &&
			str[1] == 'I' &&
			str[2] == 'M')
	{
		end = true;
	}

	return end;
}


/*
   funcao destinada a ler e
   retornar o valor total do tamanho de um arranjo
 */
int length ( char str [  ]  )
{
	if ( str == NULL  )	
	{
		return 0;
	} else 	{


		int i = 0;
		int size = 0;
		while ( str[i] != '\0'  )
		{
			size = size + 1; 
			i = i + 1;

		}
		return size; 
	}
}	



//------------funcao principal------------------

/*
   funcao destinada a verificar verficar se caso a senha passada seja válida
    ela deverar conter os aspectos de: 

    - tamanho de pelo menos 8 
    - pelo menos 1 letra maiuscula
    - pelo menos 1 letra minuscula  
    - pelo menos 1 numero
    - um caractere especial

    Sua saida deverar ser SIM ou NAO.
   */

bool senhaValida ( char str [ ] )
{
	if ( str == NULL )
	{
		return false;
	}

	int size = length ( str );

	if ( size < 8 )
	{
		return false;
	}

	bool upperC = false;
	bool lowerC = false;
	bool numb = false;
	bool esp = false;

	for ( int i = 0; i < size; i = i + 1 )
	{
		char c = str[i];

		if ( c >= 'A' && c <= 'Z' )
		{
			upperC = true;
		}
		else if ( c >= 'a' && c <= 'z' )
		{
			lowerC = true;
		}
		else if ( c >= '0' && c <= '9' )
		{
			numb = true;
		}
		else
		{
			esp = true;
		}
	}

	return upperC && lowerC && numb && esp;
}


int main ( void )
{
	char str  [ 100 ];

	//printf ( ">> " );

	while ( scanf("%99s", str ) == 1 )
	{
		if ( theEnd(str) )
		{
			break;
		}

		if ( senhaValida ( str ) )
		{
			printf("SIM");
		}
		else
		{
			printf("NAO");
		}
	}
	return 0;
} 
