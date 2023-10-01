// Programmer:		Thecanniestbadge
// Date:			06/19/2023
// Program Name:	Square Display
// Description:		This program creates a square and it detemines its size based on the number entered by the user. 

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	const int MIN_NUM = 1;
	const int MAX_NUM = 15;
	const char DISPLAY_CHAR = 'X';
	int numEntered = 0;

	// *** Your program goes here ***
	// *** INPUT ***
	// Get the number
	printf("Enter a number between %d and %d inclusive: ", MIN_NUM, MAX_NUM);
	scanf("%d", &numEntered);
	// Validate the number entered
	// Make sure the number is between MIN_NUM and MAX_NUM
	while (numEntered < MIN_NUM || numEntered > MAX_NUM)
	{
		// Error message
		printf("	The number entered, %d, is not between %d and %d.\n", numEntered, MIN_NUM, MAX_NUM);
		// Re-get the number
		printf("	Please re-enter a number between %d and %d inclusive: ", MIN_NUM, MAX_NUM);
		scanf("%d", &numEntered);
	} // end while

	printf("\n"); // Blank line

	// *** Code to generate the square ***
	// *** PROCESSING ***
	// Outer loop for the rows 
	for (int rowNum = MIN_NUM; rowNum <= numEntered; rowNum++)
	{
		// Inner loop for the columns
		for (int colNum = MIN_NUM; colNum <= numEntered; colNum++)
		{
			// *** OUTPUT ***
			printf("%c ", DISPLAY_CHAR);
		}// End for innner loop
		// End line (for the next row)
		printf("\n"); // Blank line
	}// End of outer loop 


	printf("\n"); // Blank line
	return 0;
} // end main()
