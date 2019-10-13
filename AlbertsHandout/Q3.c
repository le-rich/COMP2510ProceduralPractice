#include <stdio.h>
#include <ctype.h>

int main(int argc, char * argv[]){
	FILE *ifp;
	int count = 0;
	char c;

	if (argc != 2){
		fprintf(stderr, "Please enter only one file name");
		return 1;
	}

	if ((ifp = fopen(argv[1], "r")) == NULL){
		perror("fopen");
		return 2;
	}

	while ((c = getc(ifp)) != EOF){
		if (isalpha(c))
			count++;
	}

	if (fclose(ifp) != 0){
		perror("fclose");
		return 4;
	}


	printf("There are %d alphabet characters", count);
	return 0;
}

/* Using testQ3 should output 4 letters. */