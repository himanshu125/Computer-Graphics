#include<stdio.h> 
#include<stdlib.h> 
#include<graphics.h>
#include<math.h> 
int main() 
{
	float x1,x2,y1,y2,m,b;
	int xi,xl,yi,yl,i;
	printf("Enter 1st point: ");
	scanf("%f%f",&x1,&y1);
	printf("Enter 2nd point: ");
	scanf("%f%f",&x2,&y2);
	m = ( y2 - y1 ) / ( x2 - x1 );
	b = y1 - ( m * x1 );
	printf("%f  %f\n",m,b);
	xi=x1; yi=y1;
	xl=x2; yl=y2;
	m=abs(m);
	int gd=DETECT,gm; 
	initgraph(&gd,&gm,NULL);
	if(m <= 1)
	{
		for(i=xi;i<=xl;i++)
		{
		yi = ( m * i ) + b;
		putpixel(i,yi, RED);
		//printf("%d  %d \n",i,yi);
		}
	}
	else
	{
		for(i=yi;i<=yl;i++)
		{
		xi = ( i - b ) / m;
		putpixel(xi,i, RED);
		//printf("%d  %d \n",xi,i);
		}
	}
	delay(500000); 
	closegraph(); 
	return 0; 
}
