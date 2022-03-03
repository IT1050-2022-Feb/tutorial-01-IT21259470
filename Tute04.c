/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

# include <stdio.h>
int minimum(int number1,int number2);
int maximum(int number1,int number2);
int multiply(int number1,int nymber2);

int main() 
{
	int no1, no2;
	printf("Enter a value for no 1 : "); 
	scanf("%d", &no1);
	printf("Enter a value for no 2 : "); 
	scanf("%d", &no2);
	printf("%d ", minimum(no1, no2)); 
	printf("%d ", maximum(no1, no2)); 
	printf("%d ", multiply(no1, no2)); 
	return 0;
}
int minimum(number1, number2)
{
	if (number1>number2)
		return number2;
	else
		return number1;
}
int maximum(number1, number2)
{
	if (number1>number2)
		return number1;
	else
		return number2;
}
int multiply(number1, number2)
{
	return number1*number2;
}