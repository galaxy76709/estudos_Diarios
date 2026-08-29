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
   funcao destinada a verificar a maior substring de uma 
   string passada, so valerar a resposta assim que qualquer palavra
   seja repetida, abcabd >> sua subsString sera abc
 */

void subString(char str[])
{
    int size = length(str);
    int bigest = 0;
    int start = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int k = 0;

            while (i + k < size && j + k < size &&
                   str[i + k] == str[j + k])
            {
                k++;
            }

            if (k > bigest)
            {
                bigest = k;
                start = i;
            }
        }
    }

    for (int i = 0; i < bigest; i++)
    {
        printf("%c", str[start + i]);
    }

    printf("\n");
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
		subString(str);
        
	}
	return 0;
} 
