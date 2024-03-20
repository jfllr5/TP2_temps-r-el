#include <stdio.h>


int main() {
	
	int array[5]={2, 5, 9, 2837, 4};
	int s= 9;
	
	for(int i = 0; i<sizeof(array); i++)
	{
		if (array[i] ==s)
		{
			printf("%d\n", i);
	}

	}
	return 0;
	

}
	