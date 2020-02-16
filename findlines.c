/*
* Leon Qu
*
* Description: Program to find the number of lines in a text file.
*/

#include <stdio.h>

/*
* Function name: main
* Description: driver function to count the number of lines in a text file.
*
*/
int main(int argc, char * argv[])
{
    FILE * fp;
    int countLines = 0;
    char chr;
    char  filename[10000];

    printf("Please enter the filename.\n");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    chr = getc(fp);

    while(chr != EOF)
    {
	if(chr == '\n')
	{
	    countLines = countLines + 1;
	}
    chr = getc(fp);
    }
  
    fclose(fp);
    printf("There are %d lines in the %s file.\n", countLines, filename);
    
    return 0;
}
