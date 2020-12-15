// C program to illustrate free() 
// and malloc() function and Memory Leaks...
#include <stdio.h> 
#include <stdlib.h> 

// Driver Code 
int main() 
{ 

	// Number of element 
	int n = 3; 

	int *p = (int*)malloc(n * sizeof(int)); 

	if (p == NULL) { 
		printf("Memory allocation"
			" failed.\n"); 
		exit(0); 
	} 

	else { 

		// Memory allocation successful 
		printf("Memory allocation "
			"successful using"
			" malloc.\n"); 
		int i=0;
		// Insert element in array 
		for (i = 0; i < n; i++) { 
			p[i] = i + 2; 
		} 

		// Print the array element 
		printf("The array elements"
			" are:\n"); 

		for (i = 0; i < n; i++) { 
			printf("%d ", p[i]); 
		} 
		printf("\n");
		// De-allocate the allocated 
		// memory using free() 
		//free(p);
	} 

	return 0; 
} 

