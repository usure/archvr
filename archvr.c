/* Archvr */

// by Gr

#include <stdio.h>
#include <string.h>


int start()
{
	printf("| - ASCM Downloader for archive.org 1 Hour Books - |\n");
	printf("--- Before using this program...--- ");
	printf("\n1. Find the book you want to download on archive.org.\n");
	printf("2. Borrow it.\n");
	printf("3. Copy the URL. (ex: https://archive.org/details/[bookname] <-- it must look exactly like this)\n");
	return 0;
}

int core()
{
	printf("\nEnter link: \n"); /* asks user for input */
	//vars
		char input[100]; /* set input variable [char]*/
		int i = 0;
		char delim[] ="/"; /* "/" marks the end of a specific chunk of data */
		gets(input); /* gets input from user, stores it in var */
		char *ar[100]; /* sets array with pointer */	

	/* sets token variable pointer */
		char *token = strtok (input, delim);

	/* while the token is non-empty, put token until NULL */

		 while(token !=NULL) {
			token = strtok(NULL, delim);
			ar[i++] = token; /*it takes each section and stores it in an array */
		/*puts(token);*/
	}
	printf("\n----------------------\n");
	printf("https://archive.org/services/loans/loan/?action=media_url&identifier=%s&format=pdf&redirect=1\n", ar[2]);
	/* printf("%s\n", ar[2]); */ 
	return 0;
}

int main()
{
	
	start();
	core();
   	return 0;
}
