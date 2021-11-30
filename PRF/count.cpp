/* C Program to count the Number of Lines in a Text File */
#include <stdio.h> 
#define MAX_FILE_NAME 100 

int main() 
{ 
	FILE *f; 
	int count = 0; // Line counter (result) 

	char c; // To store a character read from file 

	// Get file name from user. The file should be 
	// either in current folder or complete path should be provided 

	// Open the file 
	f = fopen("emp.txt","r"); 

	// Check if file exists 
	if (f == NULL) 
	{ 
		printf("Could not open file %s"); 
		return 0; 
	} 

	// Extract characters from file and store in character c 
	for (c = getc(f); c != EOF; c = getc(f)) 
		if (c == '\n') // Increment count if this character is newline 
			count = count + 1; 

	// Close the file 
	fclose(f); 
	printf("The file has %d lines\n ",count); 
	return 0; 
} 

