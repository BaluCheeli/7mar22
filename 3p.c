#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
int i=1;
void * even(void *p)
{
	while(1)
	{
		if(i%2==0)
		printf("%d is even\n",i++);
		sleep(1);
	}
}
void * odd(void *p)
{
	while(1)
	{
		if((i%2)!=0)
		printf("%d is odd\n",i++);
		sleep(1);
	}
}
int main()
{
	pthread_t t1,t2;
	pthread_create(&t1,0,even,0);
	pthread_create(&t2,0,odd,0);
	pthread_join(t1,0);
	pthread_join(t2,0);
	return 0;

}
