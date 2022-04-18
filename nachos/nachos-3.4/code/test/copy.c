/* halt.c
 *	Simple program to test whether running a user program works.
 *	
 *	Just do a "syscall" that shuts down the OS.
 *
 * 	NOTE: for some reason, user programs with global data structures 
 *	sometimes haven't worked in the Nachos environment.  So be careful
 *	out there!  One option is to allocate data structures as 
 * 	automatics within a procedure, but if you do this, you have to
 *	be careful to allocate a big enough stack to hold the automatics!
 */

#include "syscall.h"
#define MAX_LENGTH 32
int main()
{
	int a = Open("a.txt");
    int b = Open("b.txt");
    char* buffer;

    Read(buffer, 50, a);
    Write(buffer, 40, b);
    PrintString("Copy thanh cong ^^\n");
    Halt();
}