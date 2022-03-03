/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

# include <stdio.h>
int main()
{
	// varibale declaration
	float distance,amount;
	
	printf("Enter distance: ");
	scanf("%f", &distance); // get user input for distance
	
	if(distance < 30)
	{
		amount = 50 * distance; // calculate the amount
	}
	else
	{
		amount = 50 * 30 + (distance - 30) * 40; // calculate the amount
	}
	printf("Final amount is %.2f\n", amount); // display the amount
	
	return 0;