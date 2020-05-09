#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //fork()
//#include <sys/wait.h>

int main( void ) {

	char *argv[3] = {"/projects/Labs/lab3/src/sequential_min_max","1","20"};

	int pid = fork();

	if ( pid == 0 ) {
		execvp( "/projects/Labs/lab3/src/sequential_min_max", argv );
	}
else{
//	 Put the parent to sleep for 2 seconds--let the child finished executing 
	wait( 2 );
	printf( "Finished executing the parent process\n"
	        " - the child won't get here--you will only see this once\n" );
    }
	return 0;
}