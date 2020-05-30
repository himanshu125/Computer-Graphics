#include<stdio.h>
#include<graphics.h>
int main()
{
	int r,xc,yc;
	printf("Enter the radius of circle: ");
	scanf("%d",&r);
	printf("Enter Coordinate's of center: ");
	scanf("%d%d",&xc,&yc);
	int x=0,y=r,p=1-r;
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
		if(p<0)
		{
			p=p+2*x+3;
		}
		else
		{
			p=p+2*(x-y)+5;
			y--;
		}
		x++;
	}
	delay(500000);
	closegraph();
	return 0;
}
