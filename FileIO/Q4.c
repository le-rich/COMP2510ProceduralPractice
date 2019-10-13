#include <stdio.h>

#define LINESIZE 128

/**
 * @brief      Reads multiple lines from one file, Outputs it into another.
 *
 * @return     
 */
int main(void){
	int numLines = 0;
	int x;
	char strBuf[LINESIZE];
	FILE *ifp;
	FILE *ofp = fopen("iofiles/Q4Output.txt", "w"); /* Empty Output File */

	if ((ifp = fopen("iofiles/Q4Input.txt", "r")) == 0){  /* File with many lines, throws a seg fault if there doesn't already exist a file with enough lines */
		perror("fopen");
	}

	printf("Enter the number of lines to be written: ");
	scanf("%d", &numLines);   /* NOTE:  %d requires that you give a pointer to an int  */

	for (x = 0; x < numLines; x++){
		fgets(strBuf, LINESIZE, ifp);	/* Note you could just as easily replace ifp here with another stream */ 
		fprintf(ofp, "%s", strBuf);
	}


	fclose(ifp);

	return 0;
}