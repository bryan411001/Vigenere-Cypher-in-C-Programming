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
	
	if (argc != 3)
	{
		printf("Failed to open file. Please make sure that you enter 'gcc -o' followed by the KEY.txt and the FILE.txt\n");
		return -1;
	}

	char * pKeyFile = argv[3];
	char * pPlaintextFile = argv[4];

	if (NULL == fp)
	{
		printf("Why did you put an empty file?..\nDo it right\n");
		return -2;
	}

	FILE * kp = fopen(pKeyFile, "r");
	FILE * fp = fopen(pFile, "r");
	
	int counter;
	
	while ()
	{
		fscanf(kp, "%c", char * ikp[])
	}
	
	while ()
	{
		fscanf(fp, "%c", char * ifp[512])
	}
	
	
	RemoveOtherCharacters()
	ConvertUppercaseToLowercase()
	
	printf("%c\n", ikp[i]);
	printf("%c\n", ifp[i]);
	
	int textLen = strlen(ifp);
	int keyLen = strlen(ikp);
	int x, key;
	
    // encryption
    for(int i = 0, j = 0, textLen = strlen(ifp); i < textLen; i++, j++)
    {
        // start the key again if key shorter than textLen
        if (j >= strlen(ikp))
        {
            j = 0;
        }
 
        // declared a variable of a different name to make the program run properly
        key = ikp[j]; 
 
        // skip key[j] if PlainText[i] is not an alpha character
        if (!isalpha(ifp[i]))
        {
            j = (j - 1);
        }  
 
        // makes Aa = 0, Zz = 25 for the uppercase letters 
        if ((key >= 'A') && (key <=  'Z'))
        {
            key = (key -  'A');
        }
 
        // makes Aa = 0, Zz = 25 for the lowercase letters
        if ((key >= 'a') && (key <= 'z'))
        {
            key = (key - 'a');
        }
 
		// encryption
		x = (ifp[i] + key);

		// wrapping after Z for uppercase letters
		if (isupper(ifp[i]) && (x > 'Z'))
		{
			x = (x - 26);
		}

		// wrapping after z for lowercase letters
		if (islower(ifp[i]) && (x > 'z'))
		{
			x = (x - 26);
		}
 
        // if character is alphabetical, print encrypted result
        if (isalpha(ifp[i]))
        {
            printf("%c", x);
        }
 
       // if non-alphabetical character, print as is   
        else
        {
            printf("%c", ifp[i]);
        }
 
    }  
	
	printf("%c\n", cryptText[])

 	return 0;
}

char RemoveOtherCharacters()
{
	
	int i, j;
	for (i = 0; line[i] != '\0'; ++i)
	{
		while (!(line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
		{
			for (j = i; line[j] != '\0';++j)
				line[j] = line[j+1];
			line[j = '\0']
		}
	}

}

char ConvertUppercaseToLowercase()
{
	int i, j;
	for(i = 0; fp[i] != '\0'; i++)
	{
		if (fp[i] >= 65 && fp[i] <= 90)
			fp[i] = fp[i] + 32;
		else
			fp[i] = fp[i] + 32;
	}
}