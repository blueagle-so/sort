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


        int n = sizeof(arr)/sizeof(arr[0]); 
B1:;    
        
B2:;    for(int i=0; i < n; i++){
        	for (int j = 0; j < n; j++){         
B3:;    		if (arr[i].id- arr[j].id>0){ 
        			int temp = arr[i].id;
        			arr[i].id = arr[j].id; 
        			arr[j].id = temp;        
        		}
        	}
B4:;
	}



        t = clock() - t;

	printf (" time : %ld clicks (%f seconds).\n",t,((double)t)/CLOCKS_PER_SEC);

	return 0;
}
