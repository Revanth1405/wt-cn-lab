Go – Back – N ARQ provides for sending multiple frames before receiving the
acknowledgment for the first frame. The frames are sequentially numbered and a finite
number of frames. The maximum number of frames that can be sent depends upon the size
of the sending window. If the acknowledgment of a frame is not received within an agreed
upon time period, all frames starting from that frame are retransmitted.
Program:
#include<stdio.h>
int main()
{
int windowsize,sent=0,ack,i;
printf("enter window size\n");
scanf("%d",&windowsize);
while(1)
{
for( i = 0; i < windowsize; i++)
{
printf("Frame %d has been transmitted.\n",sent);
sent++;
if(sent == windowsize)
break;
}
printf("\nPlease enter the last Acknowledgement received.\n");
scanf("%d",&ack);
if(ack == windowsize)
break;
else
sent = ack;
}
return 0;
}
output:-
enter window s
