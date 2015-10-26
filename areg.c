#include <stdio.h>

int x= 0;

int array[10]={4,3,7,8,4,1,0,12,13,5}; 

int copyarray[10];



	void copiar(int *apuntador)
{

      for(x=0;x<10;x++){

	copyarray[x] = *(apuntador+x);


}

}


int main()

{

        copiar(array);

	for(x=0; x<10; x++)
{

	printf("%d\n", copyarray[x]);

	
}

}



	
 
