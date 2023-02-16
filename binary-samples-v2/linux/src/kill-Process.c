/* 
Created By Darren Rainey https://github.com/DarrenRainey
05-03-2021
*/
#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

int main(){
	pid_t pid = [PROCESS ID]; // Pass or enter a process id to kill
	kill(-pid, SIGTERM); // SIGTERM nicely tasks the program to die, SIGKILL force kills the process.
	
	return 0;
}
