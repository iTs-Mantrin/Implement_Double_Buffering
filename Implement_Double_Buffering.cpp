#include<graphics.h>
#include<iostream>
//Implement Double Buffering 
/*int page=0;
while(1)
{
	setactivepage(page);
	setvisualpage(1-page);
	
	// Drawing	//
	
	page=1-page;
}
*/
int main()
{
	int height=GetSystemMetrics(SM_CYSCREEN);
	int width=GetSystemMetrics(SM_CXSCREEN);
	initwindow(width,height,"",-3,-3);
	int x=100;
	
	int page=0;
	while(1)
	{	
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
		for(int i=0;i<+20;i++)
		{
		setcolor(RED);
		rectangle(x+i,350+i,x+350-i,500-i); //Body
		setcolor(GREEN);
		circle(x+50,500+50,50-i);
		circle(x+350-50,500+50,50-i);
		}
		if(GetAsyncKeyState(VK_LEFT))
		x+=10;
		if(GetAsyncKeyState(VK_RIGHT))
		x-=10;
		if(GetAsyncKeyState(VK_ESCAPE))
		break;
		delay(10);
		
		page=1-page;
	}
	
}
