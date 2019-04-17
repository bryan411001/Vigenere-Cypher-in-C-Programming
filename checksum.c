#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
unsigned char counter(char * ptr1, int x);

int main(int argc, char *argv[])
{
  if (argc != 3)
	{
		printf("Failed to open file.\n");
		return -1;
	}
	
	FILE * fPointer = NULL;
	char singleline[150];
	char line[81] = {'\0'};
	char word[81] = {'\0'};
	int out = 0;

	fPointer = fopen(argv[1], "r");
	
	if(fPointer == NULL)
	{
		printf("This file contains nothing.\n");
		exit(0);
	}

	while((fscanf(fPointer, "%80s", word)) == 1)
	{
		if(strlen(line) + strlen(word) + 1 <= 80)
		{
			strcat(line, " ");
			strcat(line, word);
			out = 0;
		}

		else
		{
			printf("%s\n", line);
			strcpy(line, word);
			out = 1;
		}
	}

	if(!out)
	{
		printf("%s\n", line);
	}


	//"unsigned char checksum = calculate(fPointer, argv[2]);

/*	
	printf("%d", strnlen(fPointer));

	printf("%2d bit checksum is %8lx for all %4d chars\n", checkSumSize, checksum, characterCnt);
*/
	fclose(fPointer);

  return 0;
}

/*
unsigned char counter(char * ptr1, int x)
{
	int i = 0, count = 0;
	char *p = ptr1;

	while(*(p + i))
	{
		count++;
		i++;
	}

	return count;
}


unsigned char calculate(unsigned char *ptr2, size_t sz)
{
	unsigned char chksm = 0;
	while (sz-- != 0)
	{
		chksm -= *ptr2++;
	}

	return chksm;
}
*/