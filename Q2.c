#include <stdio.h>

#define LINESIZE 1024

/*  
		Simple scan program that takes ONE LINESIZE line and outputs to
		Q2.txt.
 */
int main(void){
	FILE *ofp = fopen("iofiles/Q2.txt", "w"); 									/* Creates a pointer to a file stream called Q1.txt */

	char message[1024];
	printf("Please enter a message to encode: ");
	fgets(message, LINESIZE, stdin); 										/* Put into string, message, a stream of characters of size LINESIZE, from stdin */
	fprintf(ofp, "%s", message);

	return 0;
}