#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

static char ch=65;
void * capital(void *p)
{
	while((ch>=65)&&(ch<=90))
	{
		printf("%c\n",ch);
		sleep(1);
  }
}
void * small(void *p)
{
	while(ch<=90)
	{
		printf("%c\n",ch+32);
		ch++;
                sleep(1);		
	}
}
int main()
{
	pthread_t t1[2];
	pthread_create(&t1[0],0,capital,0);
	pthread_create(&t1[1],0,small,0);
	pthread_join(t1[0],NULL);
	pthread_join(t1[1],NULL);
	return 0;

}
