#include <stdio.h>
using namespace std;



int euklides(int x, int y){
	while(x!=y){
	if(x!=y)
	{
		if(x>y)
		{
			x=x-y;
		}
		else
		{
		    y=y-x;
		}
	}
	
}
return y;
}

int main(int argc, char **argv){
	int x=20;
	int y=50;
	


printf("NWW %d", euklides(x,y));
 return 0;
}










