#include<stdio.h>
void main()
{
int i,NOP,sum=0,count=0,y,quant,wt=0,tat=0,at[10],bt[10],temp[10];
float avg_wt,avg_tat;
printf("total number of process in the system:");
scanf("%d",&NOP);
y=NOP;
for(i=0;i<NOP;i++)
{
printf("\ enter the Arrival and Burst time of the process[%d]\n,i+1);
printf("arrival time is:\t");
scanf("%d",&at[i]);
printf("\nBurst time is:\t");
scanf("%d",&bt[i]);
temp[i]=bt[i];
}
printf("enter the Time Quantum for the process: \t");
scanf("%d",&quant);
printf("\n process No \t\t Burst time \t\t TAT \t\t waiting time");
for(sum=0;i=0;y!=0)
{
if(temp[i]<= quant && temp[i]>0)
{
sum=sum+temp[i];
temp[i]=0;
count=1;
}
else if(temp[i]>0)
{
temp[i]=temp[i]-quant,
sum=sum+quant,
}
if(temp[i]==0 && count==1)
{
y--;
printf("\n process No[%d]\t\t %d\t\t\t\t %d\t\t\t %d",i+1,bt[i],sum-at[i],sum-at[i]-bt[i]);
wt=wt+sum-at[i]-bt[i];
tat=tat+sum-at[i];
count=0;
}
if(i==NOP-1)
{
i=0
}
else if(at[i+1]<=sum
{
i++;
}
else
{
i=0
}
}
avg_wt=wt*1.0/NOP;
avg_tat*1.0/NOP;
printf("\n Average Turn Around Time:\t%f",avg_wt);
printf("\n Average Waiting Time:\t%",avg_tat);

}


