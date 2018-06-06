#include <stdio.h>
#include <stdlib.h>

int top=-1, queue[5], out=0;
void push()
{
		if(top==4)
		printf("queue is full\n");
	else
		{
		printf("enter the number\n");
		int i;
		scanf("%d",&i);
		top=top+1;
		queue[top]=i;
		}
}
void pop()
{
	if (out==4)
		printf("queue is empty");
	else
		{
			printf("%d is delete from queue\n",queue[out]);
			out=out+1;	
		}
}
void disp()
{
	if(top==-1)
		printf("queue is empty\n");
	else
		{
			int i;
			for(i=out; i<=top; i++)
				printf("\n%d\n",queue[i]);
		}
}
int main()
{   int ch;
    while (1)
    {
        printf("Enter Your Choice\n 1-PUSH\n 2-POP\n 3-Display\n 4-Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: push(); break;
        case 2: pop();    break;
        case 3: disp();   break;
        case 4: exit(0);
        default: printf("wrong choice \n");
        continue;
        }
    }
    return 0;
}
