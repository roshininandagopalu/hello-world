#include<stdio.h>
char string[5][6];
void main()
{
int i,j,k,l;char flag1='y',flag2='n';
for(i=0;i<5;i++)
{
printf("enter the string %d:",i+1);
scanf("%s",string[i]);
fflush(stdin);
{
for(i=0,j=0,k=4,l=4;i<5&&k>0;i++,k--)
{
for(j=0,l=4;j<5&&l>0;j++,l--)
if(string[i][j]==string[k][l])
continue;
else
{
flag1='n';
i=5;
break;
}
}
}
for(i=0,j=0,l=0,k=0;i<5||l<5;i++,l++)
{
for(j=0,k=0;j<5||k<5;j++,k++)
{
if(string[i][j]==string[k][l])
continue;
else
{
flag2='n';
i=5;
l=5;
break;
}
}
}
if(flag1=='n'||flag2=='N')
{
printf("not an ACROSTIC\n");
}
else
{
printf("ACROSTIC\n");
}
}}