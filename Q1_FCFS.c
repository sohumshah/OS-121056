#include<stdio.h>
void main()
{
	int p[10];
	int t[10];
	int wt[10],i,n;
	printf("enter no of processes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i]=i+1;
	}
	for(i=0;i<n;i++)
	{
		printf("enter process time of process %d \n",p[i]);
		scanf("%d",&t[i]);
	}
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+t[i-1];
	}
        printf("\n------FINAL RESULT-----\n");
	printf("p_ID\t P_time\t w_time\n");
	for(i=0;i<n;i++)
	printf("%d\t%d\t%d\n",p[i],t[i],wt[i]);
}