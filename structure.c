#include<stdio.h>

struct Student
{
	int roll;
	char name[20];
	float per;
};
void main()
{
	struct Student s[100];
	int i,n,l;
	float m;
	char c[100]; 

	printf("enter student data and no. of student=");
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		printf("enter name %d ",i+1);
		scanf("%s",s[i].name);
		printf("enter percent of st. %d ",i+1);
		scanf("%f",&s[i].per);
		i++;
	}
	m=s[0].per;
	l=0;
	i=1;
	while(i<n)
	{
		if(s[i].per>m)
		{
			m=s[i].per;
			l=i;
		}
		i++;
	}	
	i=l;
	printf("%s  %f",s[i].name,m);
	getch();
}
