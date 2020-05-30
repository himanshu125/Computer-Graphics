#include<stdio.h> 
#include<stdlib.h> 
#include<graphics.h> 
int main() 
{ 
int gd=DETECT,gm; 
initgraph(&gd,&gm,NULL); 

line(100,100,200,100); 
line(150,10,150,100); 
delay(500000); 
closegraph(); 
return 0; 
}
