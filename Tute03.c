/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

# include <stdio.h>
int main ()
{
	//declaring variables
	int number, x , sum=0;
	
	printf("Enter Number: ");
	scanf("%d", &number); // get user input
	x=number;
	while (number>=1)
	{
		sum += number; // calculate sum
		number -= 1;
	}
	printf("sum of the numbers from 1 to %d : %d\n", x,sum);
	return 0;
}

