#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <vector>
#include <stack>
#include <chrono>

struct person
{
	int id;
	char fname[20];
	char lname[20];
};

int main ()
{
	FILE *infile;
	struct person input, arr[40000], key;
	int k=0;
        clock_t t;

        t = clock();

	infile = fopen ("person.dat", "r");
	
	while(fread(&input, sizeof(struct person), 1, infile)) {
		arr[k]=input;
 	 	k++;
  	}


        //int arr[] = {6, 4, 5, 2, 3, 1, 7}; 
        int n = sizeof(arr)/sizeof(arr[0]); 
        int i, j, k;
        clock_t t1;
        for (i=0; i < n; i++) 
                printf("%d ", arr[i]); 
        printf("\n"); 
        for(i = 0; i < n/2; i++)
        {
        for(j = i; j < n-i-1; j++)
        {
        if(arr[j]-arr[j+1]>0)
        {
        int temp = arr[j];
        arr[j] = arr[j+1]; 
        arr[j+1] = temp;   
        t1 = clock();
        printf ("%f ",((double)t1)/CLOCKS_PER_SEC);
        printf("j=%i [%i-%i<0] ", j, arr[j], arr[j+1]);
        for (int l=0; l < n; l++) 
                printf("%d ", arr[l]); 
        printf("\n"); 
        }
        }
        for(k = n-2-i; k > i; k--)
        {
        if(arr[k]- arr[k-1]<0)
        {
        t1 = clock();
        printf ("%f ",((double)t1)/CLOCKS_PER_SEC);
        printf("k=%i [%i-%i<0] ", k, arr[k], arr[k-1]);
        int temp = arr[k];
        arr[k] = arr[k-1]; 
        arr[k-1] = temp;
        for (int l=0; l < n; l++) 
                printf("%d ", arr[l]); 
        printf("\n"); 
        }
        }


        t = clock() - t;

	printf (" time : %ld clicks (%f seconds).\n",t,((double)t)/CLOCKS_PER_SEC);

	return 0;
}
