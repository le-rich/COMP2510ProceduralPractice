#include <stdio.h>

#define LINESIZE 1024

/*  
		User is prompted for a file name, contents are then printed to stdout.
 */
int main(void){
	FILE *ifp;																			/* Input file pointer */
	char filename[LINESIZE];   											/* Something to store the name of the file as string */
	char c;

	printf("Please enter the filename to read: ");
	scanf("%s", filename);                          /* Scan for a string input from user */
	ifp = fopen(filename, "r");											/* Try to open file using given filiename and with read intention */

	
	while ((c = getc(ifp)) != EOF){									/* Get each character until EOF is read */
		printf("%c", c);															/* Print the character. */
	}

	return 0;
}