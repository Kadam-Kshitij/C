#include <stdio.h>

const char* FILE_NAME = "/home/kshitij/Documents/c/io/test.txt";

int main()
{
	FILE* fptr = fopen( FILE_NAME, "a+" );

	const char* str = "This is a new line\n";

	char ch;
	for ( int i = 0; ( ch = str[i] ) != '\0'; ++i )
	{
		fputc( ch, fptr );				// Put a character to the file stream
	}

	const char* str1 = "Adding a string\n";
	fputs( str1, fptr );				// Put a string in the file stream

	rewind( fptr );

	while ( EOF != ( ch = ( char )fgetc( fptr ) ) )
	{
		putchar( ch );
	}

	fpos_t 


	fclose( fptr );
}
