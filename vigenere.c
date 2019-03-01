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
	
	// if you didn't enter the correct number of arguements
	if (argc != 4)
	{
		printf("Failed to open file. Please make sure that you enter 'gcc -o' followed by the KEY.txt and the FILE.txt\n");
		return -1;
	}

	// grabbing arguements 2 and 3 
	char * pKeyFile = argv[2];
	char * pPlaintextFile = argv[3];

	if (NULL == fp)
	{
		printf("Why did you put an empty file?..\nDo it right\n");
		return -2;
	}

	FILE * kp[] = fopen(pKeyFile, "r");
	FILE * fp[512] = fopen(pPlaintextFile, "r");

	printKey(kp);
	printPlaintext(fp);

	// strips all non-alphabetical characters from kp[]
	char * key[] = RemoveOtherCharacters(kp[]);

	// converts all uppercase letters to lowercase letters
	char * key[] = ConvertUppercaseToLowercase(key[]);

	// sends key[] & fp[] to be encrypted into newText[]
	char * newText[] = encryption(key[], fp[]);

	PrintCryptText(newText)

 	return 0;
}

void printKey(char * kp[])
{
	int i = 0;

	// loops from the begining to the end of the file
	while ( i != EOF)
	{
		i = fgetc(kp);
		printf("%c", i);
	}
}

void printPlaintext(char * fp[])
{
	int i = 0;

	// loops from the begining to the end of the file
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

	// loops from the begining to the end of the file
	while ( i != EOF)
	{
		i = fgetc(kp);

		// if it's a letter in the alphabet, it'll insert the letter into key[]
		if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		{
			key[kcounter] = i;
			kcounter++;
		}

		// if it is not a letter, it will not be included into key[]
		else
			break;
	}
	return key[];
}


char ConvertUppercaseToLowercase(char * key[])
{
	int i;

	// loops from the begining to the end of key[]
	while (key[i] != '\0') 
	{
		// converting uppercase letter to lowercase letter
      	if (key[i] >= 'A' && key[i] <= 'Z') 
      	{
      		key[i] = key[i] + 32;
      	}

      	// if i from key[i] != an uppercase letter, it'll do nothing and move to the next letter
      	else
      		break;
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
 
        // makes A-Z into 0-25 for the uppercase letters
        if ((k >= 'A') && (k <= 'Z'))
        {
            k = (k - 'A');
        }
 
        // makes a-z into 0-25 for the lowercase letters
		if ((k >= 'a') && (k <= 'z'))
		{
			k = (k - 'a');
		}

		// encryption equation
		w = (fp[i] + k);

		// wrapping after Z for the uppercase letters
		if (isupper(fp[i]) && (w > 'Z'))
		{
			w = (w - 26);
		}

		// wrapping after z for the lowercase letters
		if (islower(fp[i]) && (w > 'z'))
		{
			w = (w - 26);
		}

		// if there is no character(NULL) it'll replace it with 'x' until there are 512 characters
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

	// it'll loop 512 times to print
	for (finalCounter = 0, i = 0, j = 0; finalCounter <= 512; i++, j++, finalCounter++)
	{
		// if it hasn't been 80 characters, it won't skip a line
		if (j <= 80)
			printf("%c", crypt[i])

		// if it has been 80 characters, it will skip a line
		else
			printf("\n");
	}

}