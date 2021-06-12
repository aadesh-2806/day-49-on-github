#include<stdio.h>
#include<stdlib.h>

struct event
{
	int hour,minute,second;
	
};
void main()
{
	
	 struct event e1,e2,e3;
	int i,m[100][100],p,r,t,n,l;
	
	printf("enter starting time in hour:minute:second form\n ");
	scanf("%d",&e1.hour);
	scanf("%d",&e1.minute);
	scanf("%d",&e1.second);
	printf("enter ending time in hour:minute:second form\n ");
	scanf("%d",&e2.hour);
	scanf("%d",&e2.minute);
	scanf("%d",&e2.second);
	
	e3.hour=(e2.hour-e1.hour);
	e3.minute=(e2.minute-e1.minute);
	e3.second=(e2.second-e1.second);
	
	printf("%d:%d:%d",e3.hour,e3.minute,e3.second);
	
	getch();
}
