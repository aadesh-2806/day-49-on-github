#include<stdio.h>

struct employee
{
	int date,month,year;
	char name[20];
};
void main()
{
	struct employee e[10];
	int i,m[10][10][10][10],p,s,q,d,f,r,t,c,n; 

	printf("enter emp data and no. of emp=");
	scanf("%d",&n);
	
	i=0;
	while(i<n)
	{
		printf("enter name %d ",i+1);
		scanf("%s",e[i].name);
		printf("enter day/month/year of emp %d ",i+1);
		scanf("%d%d%d",&e[i].date,&e[i].month,&e[i].year);
		i++;
	}
	t=0;
	p=0;
	s=0;
	c=0;
	m[p][t][s][c]=0; 
	d=e[0].month;
	f=e[0].date;
	q=e[0].year;
	i=1;
	while(i<n)
	{
		if(e[i].year<q)
		{	
			p++;
			t=0;
			s=0;
			c=0;
			m[p][t][s][c]=i;
			q=e[i].year;
			d=e[i].month;
			f=e[i].date;
	
		}
		else
		{
			if(e[i].year==q)
			{
				if(e[i].month<d)
				{
					t++;
					s=0;
					c=0;
					m[p][t][s][c]=i;
					d=e[i].month;
					f=e[i].date;
	
				}
				else
				{
					if(e[i].month==d)
					{
						if(e[i].date<f)
						{
							s++;
							c=0;
							m[p][t][s][c]=i;
							f=e[i].date;
				
						}
						else
						{
							if(e[i].date==f)
							{
								c++;
								m[p][t][s][c]=i;
							}
						}
					}
				}
			}
		}
		i++;
	}	
	while(t>=0)
	{
		while(s>=0)
		{
			while(c>=0)
			{
					
				i=m[p][t][s][c];
				printf("%s :: %d/%d/%d\n",e[i].name,f,d,q);
				c--;
			}
			s--;
		}
		t--;
	}
	getch();
}
