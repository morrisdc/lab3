#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{		
		//define integer variables to be passed to kernel
		int x = 1;
		int y = 2;
		int addres;
		
		//dereference syscall addition result
        syscall(319, x, y, &addres);
        printf("First number: %d \n", x);
        printf("Second number: %d \n", y);
        printf("Sum: %d \n", addres);
        
        return 0;
}
