#include <stdio.h> 

int main () 
{
	char fds [9999];
	while ( !(fds[0] == 'F' && fds [1] == 'I' && fds [2] == 'M') )

	{ 
		scanf("%s", fds); 
		printf("%s", fds);
	}

	return 0; 
} 
