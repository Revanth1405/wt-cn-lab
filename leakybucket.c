#include<stdio.h>
#include<stdlib.h>
#define bucketSize 512
void bktInput(int a,int b)
{
if(a>bucketSize)
printf("\n\t\tBucket overflow");
else {
//delay(500);
while(a>b){
printf("\n\t\t bytes outputed %d",b);
a-=b;
//delay(500);
}
if (a>0) printf("\n\t\tLast %d" ,a);
printf("bytes sent\t");
printf("\n\t\tBucket output successful");
}
}
void main() {
int op, pktSize;
srand(7);
printf("Enter output rate : ");
scanf("%d",&op);
for(int i=1;i<=5;i++){
//delay(random(1000));
pktSize=rand()%1000;
printf("\nPacket no %d",i);
printf("\tPacket size = %d",pktSize);
bktInput(pktSize,op);

}
}
