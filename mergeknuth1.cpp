// C++ program for Merge Sort
#include <iostream>
// C program for reading
// struct from a file
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// struct person with 3 fields


#include <stdio.h>
#include <stdlib.h>
//#include <mysql.h>
#include <iostream>
//#include <vector>
#include <string>
#include <vector>
#include <stack>
#include "logdur.h"

using namespace std;
void printArray(int A[], int size)
{
        for (int i = 0; i < size; i++)
                cout << A[i] << " ";
}

struct person
{
	int id;
	char fname[20];
	char lname[20];
};

// Driver program
int main ()
{
                      int arr[40000]={0}, key;
        for(int i=0;i<40000;i++)
                arr[i]=rand();
       int n = sizeof(arr) / sizeof(arr[0]);


        // Open person.dat for reading

        {
        LogDuration ld("mergesort");



int s,i,j,k,l,d,f,o;
N1:;s=0;
N2:;if(s==0){i=1;j=n/2;k=n/2+1;l=n;}
    if(s==1){i=n/2+1;j=n;k=1;l=n/2;}
    d=1;f=1;

N3:;if(arr[i]>arr[j])goto N8;
    if(i==j){arr[k]=arr[i];goto N13;}

N4:;arr[k]=arr[i];k=k+d;

N5:;i++;if(arr[i-1]<=arr[i])goto N3;

N6:;arr[k]=arr[j];k=k+d;

N7:;j--;if(arr[j+1]<=arr[j]){goto N6;}else goto N12;

N8:;arr[k]=arr[j];k=k+d;

N9:;j--;if(arr[j+1]<=arr[j])goto N3; 

N10:;arr[k]=arr[i];k=k+d;

N11:;i++;if(arr[i-1]<=arr[i])goto N10;

N12:;f=0;d=-d;o=k;k=l;l=o;goto N3; 

N13:;if(f==0){s=1-s;goto N2;}else goto END;
     if(s==0)for(int p=n/2;p<=n;p++)arr[p-n/2]=arr[p];
END:;

	}

        return 0;
}
