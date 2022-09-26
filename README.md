# Movable cart 

//Implement Double Buffering 

int page=0;

while(1)

{

	setactivepage(page);
	
	setvisualpage(1-page);
	
	// Drawing	//
	
	page=1-page;
}
