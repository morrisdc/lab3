#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
		 //pass syscall id through to execute helloworld
         long int test = syscall(318);
}
