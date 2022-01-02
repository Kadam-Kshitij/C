#include <stdio.h>

const char* FILE_NAME = "/home/kshitij/Documents/c/io/test.txt";

int main()
{
	FILE* fptr = fopen( FILE_NAME, "r" );		// Opens file and returns NULL if unsuccessful
												// else pointer to the file is returned

	if ( fptr == NULL )
	{
		perror( "Could not open file " );
		return -1;
	}

	char ch;
	while ( EOF != ( ch = ( char )fgetc( fptr ) ) )		// Read a char from the file stream
	{
		putchar( ch );							// Put character on stdout
	}

	rewind( fptr );								// Take the pointer to start of file stream

	char buff[255];
	while ( fgets( buff, 255, fptr ) )			// Get a string from the file stream
	{
		puts( buff );							// Write stream to stdout. Additional '\n' is also added.
	}


	fclose( fptr );
}
