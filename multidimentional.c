#include<stdio.h>
int main()
{   

	int row,col;
	int ident[row][col];
	
	

	for(row=0;row<5;row++)
		for(col=0;col<5;col++)
			if(row==col)
				ident[row][col]=1;
				else
					ident[row][col]=0;
					return 0;

}

