
/*signals are software interrupts,some of the senarios signals are use:
1.combination multiple keywords
2.kernel gwnerate signal and sens to process.
3.process send signal to another process.
4.kenl genates signal for some events..
kill-l-->to see signal info 64 signal

signal and sigaction we are gng to generaete siganl,
*signal and sigaction(befre gng to signal depostion table it check wether signal  mask is block are not)

ps-ef-->we will get pid,
ps-es->staus info
cd /proc/pid/cat status.

*signal mask
*pending signal info
************************

*/
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
mysighandler(int signal)
{
	printf("handdler\n");
	sleep(10);
}
main()
{

	signal(2,mysighandler);
	while(1)
	{
		printf("signal\n");
		sleep(5);

	}



};
/*main()
{
	struct sigaction act;
	act.sa_handler=mysighandler;
	act.sa_flags=0;
	sigemptyset(&act.sa_mask);
	
	sigaddset(&act.sa_mask,3);
	sigaction(2,&act,NULL);
	while(1)
	{
		printf("signal\n");
		sleep(5);


	}




}

*/
