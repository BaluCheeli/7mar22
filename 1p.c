#include<stdio.h>
#include<stdlib.h>
#define N 5
struct student
{
char name[10];
float marks;
};
int main()
{
struct student *p;
int i;
p=malloc(N*sizeof(struct student));
for(i=0;i<N;i++)
{
printf("enter student name and marks \t");
scanf("%s %f",p[i].name,&p[i].marks);
}
for(i=0;i<N;i++)
printf("%d.. %s %f\n",i,p[i].name,p[i].marks);


}
