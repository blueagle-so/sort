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

// Driver program
int main ()
{
	FILE *infile;
	struct person input, arr[40000], key;
int k=0;
        clock_t t;

        t = clock();



	// Open person.dat for reading
	infile = fopen ("person.dat", "r");
	if (infile == NULL)
	{
		fprintf(stderr, "\nError opening file\n");
		exit (1);
	}

	// read file contents till end of file
	while(fread(&input, sizeof(struct person), 1, infile)) {

  arr[k]=input;

  k++;
  }


        int n = sizeof(arr)/sizeof(arr[0]); 
B1:;    int bound = n;
        
B2:;    for(;;){
        int t=0;
        for (int j = 0; j < bound-1; j++){         
B3:;    if (arr[j].id- arr[j+1].id>0){ 
        int temp = arr[j].id;
        arr[j].id = arr[j+1].id; 
        arr[j+1].id = temp;        
        t=j;
        }
        }
B4:;    if (t==0) goto B5;

	bound=t+1;

}
B5:;   



        t = clock() - t;

	printf (" time : %ld clicks (%f seconds).\n",t,((double)t)/CLOCKS_PER_SEC);

	return 0;
}
