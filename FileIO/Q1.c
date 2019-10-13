#include <stdio.h>

/*  
    Simple scan program that takes one word and outputs to
    Q1.txt.
 */
int main(void){
  FILE *ofp = fopen("iofiles/Q1.txt", "w");                         /* Creates a pointer to a file stream called Q1.txt */

  char message[1024];
  printf("Please enter a message to encode: ");
  scanf("%s", message);
  fprintf(ofp, "%s", message);


  fclose(ofp);

  return 0;
}