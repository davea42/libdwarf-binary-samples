// C sockect client example by DarrenRainey https://github.com/DarrenRainey

#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <sys/socket.h>	// Include sockect libary
#include <sys/types.h>	// Added types libary
#include <netinet/in.h>	// Add in.h libary for dns resolving
#include <netdb.h>	// Add netdb libary
#include <stdio.h>	// Add standard input and output header file
#include <string.h>	// Include string file
#include <stdlib.h>	// Include standard libary header file
#include <unistd.h>	// Inclue unistd header file
#include <errno.h>	// Include error header file
#include <arpa/inet.h>	// Include inet header file

int main(int argc, char *argv[]) // Start main function
{
	int sockfd = 0, n = 0; // Set sockfd and n as 0
	char recvBuff[1024];	// Set recvBuff size
	struct sockaddr_in serv_addr; // Set sockaddr_in and serv_addr as structured data
	
    if(argc != 2) // If more than 2 arguments
	{
		printf("\n Usage: %s <ip of server> \n",argv[0]); // Display help message if no command line arguments specified
		return 1; // Print error code 1 if failed
	}
    memset(recvBuff, '0',sizeof(recvBuff)); // Allocate memory
    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)	// If no data is recived display the following error
	{
	printf("\n Error : Could not create socket \n"); // Print error if failed to create a sockect
	return 1; // Return error code 1 if failed
	}
    memset(&serv_addr, '0', sizeof(serv_addr)); // Allocate memory
	
	serv_addr.sin_family = AF_INET; 	// Set server ip via command line
	serv_addr.sin_port = htons(5000);  // Target server port
	
	if(inet_pton(AF_INET, argv[1], &serv_addr.sin_addr)<=0) // If command line argument if invailed
	{
	printf("\n inet_pton error occured\n"); // Display error if connection timed output
	return 1; // Return error code 1 if failed
	} 
	if( connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) // If there is no command line arguments display the following error
	{
       printf("\n Error : Connect Failed \n"); // Print error if failed to connect to target server
		return 1; // Return error code 1 if failed
	}
    while ( (n = read(sockfd, recvBuff, sizeof(recvBuff)-1)) > 0) //	While N is reciving data
    {
		recvBuff[n] = 0;							//
		if(fputs(recvBuff, stdout) == EOF)			//	If no data is recive display error
		{											//
		printf("\n Error : Fputs error\n"); // Display error if failed to store output
		}
	} 

    if(n < 0) // If N is less than 0 display error
	{
	printf("\n Read error \n"); // Display an error if failed to read socket
	} 
	return 0; // Exit if no errors
}
