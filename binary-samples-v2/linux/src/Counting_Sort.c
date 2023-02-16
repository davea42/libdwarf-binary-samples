#define A_MACRO 1
#ifdef A_MACRO
#define B_MACRO 2
#endif
#include <stdio.h>	//	Include Standard C header file
#include <stdlib.h>	//	Include Stanard Libary file for some extra functions

int main()
{
    int i,j,k,n,a[100],b[100],c[100];	// Create some arrays for later use
    scanf("%d",&n);
	
    for(i=0;i<n;i++){
	printf("[i] Please Enter A Number :");	// Ask for a number
	scanf("%d",&a[i]);			// Add current number to the array
    }
	
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i])
            min=a[i];
    }
	
    for(i=0;i<n;i++)
        a[i]=a[i]-min+1;

    int max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i])
            max=a[i];
    }
    int m=max;
    for(i=0;i<=m;i++)
        c[i]=0;
    for(i=0;i<n;i++){
    c[a[i]]=c[a[i]]+1;
    }
    for(i=1;i<=m;i++){
        c[i]=c[i-1]+c[i];
    }
    for(i=0;i<n;i++){
        b[c[a[i]]]=a[i];
        c[a[i]]--;
    }

    printf ("Sorted Array is: \n");

		for (int i=1; i<=n; i++)	
		{
		    b[i] = b[i]+min-1;		//	Sort the array in order
			printf ("%d ", b[i]);	//	print in order
		}
	
	return 0; // Exit with no error code - exit with code zero
}
