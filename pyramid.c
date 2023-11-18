#include <stdio.h>

void pyramid(int lines){
	int i , j , s , str;
	str = 1;
	int Tspace = lines;
	// global loop
	for(i = 0 ; i <lines ; i++)
	{
		
		// loop for numbers of spaces befor the stars 
		for(s = 0 ; s<Tspace;){
			printf(" ");
			s++;
		}
		Tspace--;
		// number of start in such a line
		for(j = 0 ; j <str ; )
		{
			printf("*");
			j++;
		}
		printf("\n");
		str=str+2;
		
	}
}

int main(){
	pyramid(125);
	return 0;
}
