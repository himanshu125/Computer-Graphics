#include<stdio.h>
#include<graphics.h>
int main()
{
	int r,xc,yc;
	printf("Enter the radius of circle: ");
	scanf("%d",&r);
	printf("Enter Coordinate's of center: ");
	scanf("%d%d",&xc,&yc);
	int x=0,y=r,d=3-2*r;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	while(x<=y)
	{
		putpixel(xc+x,yc+y,RED);			
		putpixel(xc+x,yc-y,RED);
		putpixel(xc-y,yc+x,RED);		
		putpixel(xc-y,yc-x,RED);
		putpixel(xc-x,yc-y,RED);		
		putpixel(xc-x,yc+y,RED);
		putpixel(xc+y,yc-x,RED);
		putpixel(xc+y,yc+x,RED);
		if(d<0)
		{
			d=d+4*x+6;
		}
		else
		{
			d=d+4*(x-y)+10;
			y--;
		}
		x++;
	}
	delay(500000);
	closegraph();
	return 0;
}
