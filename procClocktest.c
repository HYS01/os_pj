#include "types.h"
#include "stat.h"
#include "user.h"

void periodic();
int 
main(int argc,char *argv[])
{
	cps();
	printf(1,"1111\n");
	int i;
	printf(1,"procClock test starting\n");
	procClock(10,2,5);
	
	for(i=0;i<50*500000;i++) {
		if((i++%5000000) == 0) {
			write(2,".",1);
		}
	}
	printf(1,"!!!!\n");
	cps();
	exit();
}

void
periodic()
{
	printf(1,"alarm!\n");
}
