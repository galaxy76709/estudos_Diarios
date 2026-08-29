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
funcao destinada para inversao de string
realiaza a inversao em seu loop pegando a ultima posicao em "copy" 
e decrementando i - 1 e atribuindo aos valores de str
*/
void invertString (char str[  ], char copy[  ])
{
	if ( str == NULL )
	{
		return; 
	}

	int size = length( str );

	for ( int i = 0; i < size; i = i + 1 )
	{
		copy [ size - 1 - i ] = str [ i ];
	}

	copy [ size ] = '\0';

} 


int main ( void )
{
	char str [ 100 ];
	char copy [ 100 ];

	//printf ( ">> " );

	while ( scanf("%99s", str ) == 1 )
	{
	if ( theEnd(str) )
	{
		break;
	}

	invertString ( str, copy );

	printf ( "%s\n", str);

	printf ( "%s\n", copy );
	}
	return 0;
} 
