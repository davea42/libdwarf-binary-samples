/* 
Created By Darren Rainey https://github.com/DarrenRainey
Arguments --help and --log
*/
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

	printf("=========================================================================\n");
	printf("|\tC File System Max Stats By Darren Rainey - Version 1.0A \t|");
	printf("\n=========================================================================\n");

	printf("Maximum Amount Of Files That Can Be Guaranteed To Open : \t%d\n",FOPEN_MAX);
	printf("Maximum File Name  Length :\t\t\t\t\t%d\n",FILENAME_MAX);
	printf("Maximum Number Of Unique Filenames TMPNAM Can Generate : \t%d\n",TMP_MAX);

	if(argc > 1)
	{

	if(strcmp(argv[1], "--help") == 0 )
	{
	printf("===================== Help Information =====================\n");
	printf("Version 1.0A By DarrenRainey - GitHub.com/DarrenRainey\n\n");
	printf("FOPEN_MAX - \n\t\tThis macro is an integer, \n\t\twhich represents the maximum \n\t\tnumber of files that the system \n\t\tcan guarantee to be opened simultaneously.\n");
	printf("\n\nFILENAME_MAX - \n\t\tThis macro is an integer, which represents \n\t\tthe longest length of a char array suitable for \n\t\tholding the longest possible filename. If the \n\t\timplementation imposes no limit, then this value \n\t\tshould be the recommended maximum value.\n");
	printf("\n\nTMP_MAX - \n\t\tThis macro is the maximum number of unique filenames \n\t\tthat the function tmpnam can generate.\n");
	}
	else if(strcmp(argv[1], "--log") == 0 )	{
	printf("Logging To Numbers To File\n");
	FILE * file;
	file = fopen("output.log","w");
	fprintf(file,"%d\t\t\t\tFOPEN_MAX\n",FOPEN_MAX);
	fprintf(file,"%d\t\t\t\tFILENAME_MAX\n",FILENAME_MAX);
	fprintf(file,"%d\t\t\t\tTMP_MAX\n",TMP_MAX);
	fclose(file);
	}

	}
	return 0;
}
