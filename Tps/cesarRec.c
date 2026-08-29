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
   funcao prevista para receber uma String e realizar um
   cast adiconando +3 para todos seus caracteres (em base a tabela
   ASCII), de forma recursiva
 */

void cesarRec ( char str [ ], char resp [ ], int index, int size )
{
	if ( index >= size )
	{
		resp[index] = '\0';
		return;
	}

	char oW = (char) ( str[index] + 3 );
	resp[index] = oW;

	cesarRec ( str, resp, index + 1, size );
}


int main ( void )
{
	char str  [ 100 ];
	char resp [ 100 ];

	while ( scanf("%99s", str ) == 1 )
	{
		if ( theEnd(str) )
		{
			break;
		}

		cesarRec ( str, resp, 0, length(str) );
		printf("%s\n", resp );
	}
	return 0;
}
