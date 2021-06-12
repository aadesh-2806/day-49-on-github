#include<stdio.h>
#include<stdlib.h>

struct Student
{
	int roll;
	char name[20];
	float per;
}; 
void main()
{
	//struct Student s[100];
	struct Student *s;
	int i,m[100][100],p,r,t,n,l;
	float q;
	char c[100]; 

	printf("enter student data and no. of student=");
	scanf("%d",&n);
	
	s = (struct Student*)malloc(n*sizeof(struct Student));
	if(s==NULL)
	{
		s = (struct Student*)calloc(n,sizeof(struct Student));
		if(s==NULL)
		{
			printf("Memory is not available");
			getch();
			exit(1);
		}
	}
	
	i=0;
	while(i<n)
	{
		printf("enter name %d ",i+1);
		scanf("%s",s[i].name);
		printf("enter percent of st. %d ",i+1);
		scanf("%f",&s[i].per);
		i++;
	}
	t=0;
	p=0;
	m[p][t]=0; // 
	q = s[0].per;
	// l=0;
	i=1;
	while(i<n)
	{
		if(s[i].per>q)
		{	
			p++;
			t=0;
			m[p][t]=i;
			q=s[i].per;
			
		}
		else
		{
			if(s[i].per==q)
			{
				t++;
				m[p][t]=i;
				//q=s[i].per;
			}
		}
		i++;
	}
	r=t;
	t=0;	
	while(t<=r)//(t<=r)
	{
		i=m[p][t];
		printf("%s  %f",s[i].name,q);
		t++;
		
	}
	free(s);
	getch();
}
