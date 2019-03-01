/*
 * This file intentionally left blank. THIS TIME.
 * In the event you have previously downloaded
 * it from the earlier posted ZIP file, consider
 * the following:
 * - The posted code will be used as a baseline
 *   for the plagiarism check software we use.
 * - If 100 folks have significantly plagiarized
 *   this code, their grade will be SPLIT evenly
 *   amongst the 100. So, suppose a 80 was the 
 *   score, then the 100 would each earn 80/100, 
 *   or .8 % for the assignment.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char * argv[])
{
	int i = 0;
	 fcounter = 0;
	char key[], file[];
	
	if (argc != 4)
	{
		printf("Failed to open file. Please make sure that you enter 'gcc -o' followed by the KEY.txt and the FILE.txt\n");
		return -1;
	}

	char * pKeyFile = argv[2];
	char * pPlaintextFile = argv[3];

	if (NULL == fp)
	{
		printf("Why did you put an empty file?..\nDo it right\n");
		return -2;
	}

	FILE * kp[] = fopen(pKeyFile, "r");
	FILE * fp[512] = fopen(pFile, "r");

	printKey(kp);
	printPlaintext(fp);
	
	char * key[] = RemoveOtherCharacters(kp[]);
	char * key[] = ConvertUppercaseToLowercase(key[]);

	char * newText = encryption(key[], fp[]);

	PrintCryptText(newText)

 	return 0;
}

void printKey(char * kp[])
{
	int i = 0;
	while ( i != EOF)
	{
		i = fgetc(kp);
		printf("%c", i);
	}
}

void printPlaintext(char * fp[])
{
	int i = 0;
	while ( i != EOF)
	{
		i = fgetc(fp);
		printf("%c", i);
	}
}

char RemoveOtherCharacters(char * kp[])
{
	int i = 0;
	int kcounter = 0

	while ( i != EOF)
	{
		i = fgetc(kp);
		if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		{
			key[kcounter] = i;
			kcounter++;
		}
		else
			break;
	}
	return key[];
}


char ConvertUppercaseToLowercase(char * key[])
{
	int i;
	while (key[i] != '\0') 
	{
      	if (key[i] >= 'A' && key[i] <= 'Z') 
      	{
      		key[i] = key[i] + 32;
      	}
      	c++;
   	}
	return key[];
}


char encryption(char * key[], char * fp[])
{
	int counter = 0;
	char * cryp = cryptTextFile[512];
	
	// encryption
    for(int i = 0, j = 0, w = 0, stop = 0, textLen = strlen(fp); stop <= 512; i++, j++, stop++)
    {

        // start the key again if key shorter than textLen
        if (j >= strlen(key))
        {
            j = 0;
        }
 
        // declared a variable of a different name to make the program run properly
        k = key[j]; 
 
        // skip key[j] if fp[i] is not an alpha character
        if (!isalpha(fp[i]))
        {
            j = (j - 1);
        }  
 
        // makes Aa = 0, Zz = 25 for the uppercase letters
        if ((k >= 'A') && (k <= 'Z'))
        {
            k = (k - 'A');
        }
 
        // makes Aa = 0, Zz = 25 for the lowercase letters
		if ((k >= 'a') && (k <= 'z'))
		{
			k = (k - 'a');
		}

		// encryption
		w = (fp[i] + k);

		// wrapping after Z for uppercase letters
		if (isupper(fp[i]) && (w > 'Z'))
		{
			w = (w - 26);
		}

		// wrapping after z for lowercase letters
		if (islower(fp[i]) && (w > 'z'))
		{
			w = (w - 26);
		}

		// if there is no character(NULL)
		if (w = NULL)
		{
			x = 'x';
			cryptTextFile[counter] = x;
			counter++;
		}

		// if character is alphabetical, print encrypted result
		if (isalpha(fp[i]))
		{
			cryptTextFile[counter] = x;
			counter++;
		}

		// if non-alphabetical character, print as is
		else
		{
			cryptTextFile[counter] = fp[i];
			counter++;
		}
	}

	return cryptTextFile[512];
}

void PrintCryptText(char * crypt[])
{
	int cryptAssist = 0;

	for (finalCounter = 0, i = 0, j = 0; finalCounter <= 512; i++, j++, finalCounter++)
	{
		if (j <= 80)
			printf("%c", crypt[i])
		else
			printf("\n");
	}

}