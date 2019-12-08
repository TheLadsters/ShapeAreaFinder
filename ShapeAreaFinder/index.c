#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char shape;
    int side, square,length,width, rectangle,radius, circle,base, height, triangle;
	printf("S - square\nR - rectangle\nC - circle\nT - triangle\nPlease enter the first letter of the shape would you like to get the area of:\n ");
	scanf("%c",&shape);
	
	 if ((toupper(shape)=='S'))
	 	{
    	printf("Please enter value of side:");
    	scanf("%d",&side);
		square=side*side;
		
		printf("Your area is equal to: %d",square);
		}
	
	
    else if ((toupper(shape)=='R'))
    	{
    	printf("Please enter the value of your length:");
    	scanf("%d",&length);
    	
    	printf("Please enter the value of your width:");
    	scanf("%d",&width);
    	
    	rectangle= length*width;
    	printf("Your area is equal to: %d",rectangle);
		}
	
	
    else if ((toupper(shape)=='C'))
    	{
    	printf("Please enter radius:");
    	scanf("%d",&radius);
    	
    	circle=2*3.1415*(radius*radius);
    	printf("Your area is equal to: %d",circle);
		}
	
	
    else if ((toupper(shape) =='T'))
    	{
    	printf("Please enter base:");
    	scanf("%d",&base);
    	
    	printf("Please enter height:");
		scanf("%d",&height);
		
		triangle=((base*height)/2);
		printf("Your area is equal to: %d",triangle);
		}
    
    
    else
    	{
    	printf("that is not in any of the choices.");
		}
return 0;
}
