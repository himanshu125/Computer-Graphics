#include<stdio.h> 
#include<stdlib.h> 
#include<graphics.h> 
int main() 
{ 
int gd=DETECT,gm; 
initgraph(&gd,&gm,NULL); 

ellipse(100, 100, 0, 360, 50, 25); 

delay(500000); 
closegraph(); 
return 0; 
} 
