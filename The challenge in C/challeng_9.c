#include<stdio.h>
#include<math.h>

int main(){

int x1,y1,x2,y2;
printf("Entre M(x1 , y1)\n");
scanf("%d",&x1);
scanf("%d",&y1);

printf(" Entre N(x2,y2)\n");

scanf("%d",&x2);
scanf("%d",&y2);

printf("M(%d,%d) , N(%d,%d)\n",x1,y1,x2,y2);

int result = sqrt((x2-x1)^2 + (y2-y1)^2);
printf("la distance MN :%d", result);

//(v(2-x1)² + (xy2-y1)²)
return 0;

}
