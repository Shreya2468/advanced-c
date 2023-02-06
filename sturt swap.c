#include<stdio.h>
#include<conio.h>
struct newdatatype
{
	int roll;
	int marks;
	char name[20];
};
typedef struct newdatatype student;
	int main()
	
	{
		student st[5];
		int i,j,k,temp;
		int hmarks=0;
		for(i=0;i<3;i++)
		{
			printf("ENTER ROLL NO :");
			scanf("%d",&st[i].roll);
			printf("ENTER NAME :");
			scanf("%s",&st[i].name);
			printf("ENTER marks :");
			scanf("%d",&st[i].marks);
		}
			for(i=0;i<3;i++)
		{
			printf("%d  ",st[i].roll);
			printf("%s  ",st[i].name);
			printf("%d  \n",st[i].marks);
		}
		
			for(i=0;i<3;i++)
		 {
			if(hmarks<st[i].marks)
			{
				hmarks=st[i].marks;
				k=i;
			}
	     } 
		printf("%d  ",hmarks);
		printf("%s",st[k].name);
    } 
    for(i=0;i<3;i++)
    {
    	temp=st[j].marks;
    	st[j].marks=st[k].marks;
    	st[k].marks=temp;
	}
	for(i=0;i<3;i++)
	{
			printf("ENTER ROLL NO :");
			scanf("%d",&st[i].roll);
			printf("ENTER NAME :");
			scanf("%s",&st[i].name);
			printf("ENTER marks :");
			scanf("%d",&st[i].marks);
	}

	

