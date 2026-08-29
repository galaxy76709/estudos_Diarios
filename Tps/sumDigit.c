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


//------------funcao principal------------------
/*
funcao prevista para a soma total de valores de um vetor
*/


int main ( void )
{
	char str [ 100 ];
	int vect [ 100 ];    
	int size = 0;
	//printf ( ">> " );

	while ( size < 100 && scanf("%99s", str ) == 1 )
	{
		if ( theEnd(str) )
		{
			break;
		}

		vect [ size ] = atoi( str );
		size ++;

	}

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += vect[i];
    }

        printf("%d\n", sum);


	return 0;
} 
