#include <stdio.h>
// function declaration
int sum(int num1, int num2);

int callbyvalue(int x){
    x = x +10;
    printf("inside value of a function %d\n",x);
}

int main()
{

    /*
    this is the explen for the functions in c
    */
    printf("\t\tEXAMPLE OF THE USER-DEFINED FUNCTIONS\n");

    printf("the user defined functions are defined by the user to access it or make a call it will porform some code inside the function whene we call the function\n");

    printf("enter the two numbers for porform calculation\n");
    int first, second;
    printf("enter the first number:");
    scanf("%d", &first);
    printf("enter the second number:");
    scanf("%d", &second);

    // function calling
    printf("the sum of two numbers is : %d\n", sum(first, second));

    //CALL BY VALUE AND CALL BY REFRENCE

    printf("\t\tEXAMPLE OF CALL BY VALUE\n");

    /*
    the example of call by value 
    states that if we pass the value to the function the value passed hace a copy of it
    The function operates on this copy, and the original variable in the calling code remains untouched.
    */

   int x=5;

   printf("the value of x befor passing to function %d\n",x);
   callbyvalue(x);//calling the function call by value
   printf("the value of x afther callbyvalue %d\n",x);


    return 0;
}

// function defination
int sum(int num1, int num2)
{
    return num1 + num2;
}