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
   funcao destinada a verificar se uma String e:
   vogal, consoante, numero ou natural,
   de forma recursiva
 */

bool isVogalRec ( char str [ ], int index, int size )
{
	if ( index >= size )
	{
		return false;
	}

	char c = str[index];

	if ( c >= 'A' && c <= 'Z' )
	{
		c = c + ('a' - 'A');
	}

	if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
	{
		return true;
	}

	return isVogalRec ( str, index + 1, size );
}

bool isConsoanteRec ( char str [ ], int index, int size )
{
	if ( index >= size )
	{
		return false;
	}

	char c = str[index];

	if ( c >= 'A' && c <= 'Z' )
	{
		c = c + ('a' - 'A');
	}

	if ( c >= 'a' && c <= 'z' )
	{
		if ( c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' )
		{
			return true;
		}
	}

	return isConsoanteRec ( str, index + 1, size );
}

bool isNumeroRec ( char str [ ], int index, int size )
{
	if ( index >= size )
	{
		return false;
	}

	char c = str[index];

	if ( c >= '0' && c <= '9' )
	{
		return true;
	}

	return isNumeroRec ( str, index + 1, size );
}

bool isNaturalRec ( char str [ ], int index, int size )
{
	if ( index >= size )
	{
		return true;
	}

	char c = str[index];

	if ( ( c >= '0' && c <= '9' ) || c == '.' || c == '-' || c == '+' )
	{
		return isNaturalRec ( str, index + 1, size );
	}

	return false;
}


int main ( void )
{
	char str [ 100 ];

	while ( scanf("%99s", str ) == 1 )
	{
		if ( theEnd(str) )
		{
			break;
		}

		bool X1 = isNaturalRec ( str, 0, length(str) );
		bool X2 = isConsoanteRec ( str, 0, length(str) );
		bool X3 = isNumeroRec ( str, 0, length(str) );
		bool X4 = isNaturalRec ( str, 0, length(str) );

		printf("%s %s %s %s\n",
			(X1 ? "SIM" : "NAO"),
			(X2 ? "SIM" : "NAO"),
			(X3 ? "SIM" : "NAO"),
			(X4 ? "SIM" : "NAO"));
	}
	return 0;
}
