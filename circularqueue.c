#include<stdio.h>
#define size 10
int q[size];
int front=0,rear=0;
void insertq(int item)
{
if((rear+1)%size==front)
printf("queue is full\n");
else
{
rear=(rear+1)%size;
q[rear]=item;
printf("inserted %d\n",item);
}
}
void deleteq()
{
if(front==rear)
printf("queue is empty\n");
else
{
front=(front+1)%size;
printf("Deleted%d\n",q[front]);
}
}
void searchq(int item)
{
int i=(front+1)%size;
int pos=1;
while(i!=(rear+1)%size)
{
if(q[i]==item)
{
printf("Found at position%d\n",pos);
return;
}
i=(i+1)%size;
pos++;
}
printf("Not found\n");
}
int main()
{
int item,opt=0;
while(opt!=4)
{
printf("\n1.Insert\n");
printf("\n2.Delete\n");
printf("\n3.Search\n");
printf("\n4.Exit\n");
printf("option:");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("Data:");
scanf("%d",&item);
insertq(item);
break;
case 2:
deleteq();
break;
case 3:
printf("Number to search:");
scanf("%d",&item);
searchq(item);
break;
case 4:
printf("program ended\n");
break;
default:
printf("Invalid option\n");
}
}
return 0;
}

