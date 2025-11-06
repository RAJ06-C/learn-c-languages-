#include<stdio.h>

void callbyrefrence(int *ptr){
    *ptr = *ptr + 10;
    printf("the value inside the function %d\n",*ptr);
}

int sumplefunc(int num1,int num2){
    return num1 + num2;
}

int main(){

    //CALL BY REFRENCE 
    printf("\t\tEXAMPLE OF CALL BY REFRENCE\n");
    /*
    this is the example of call by refrence
    it states that whene ever we pass a value to a function
    it will change the value
    */

   /*
   n C, true call by reference (like in C++) is not directly available for primitive types. Instead, it is simulated by passing the address of the variable using pointers. The function then receives a pointer to the original variable, allowing it to directly access and modify the original data.
   */

    int x=5;

    printf("the value of x befor function calling %d\n",x);
    callbyrefrence(&x);
    printf("the value afther calling the function %d\n",x);

    printf("\twe can also create a pointer function\n");
    printf("\t\tEXAMPLE OF POINTER FUNCTION\n");


    //pointer function declaration
    int (*funcpoint)(int,int);
    
    //assign the sumplefunc function to the pointer
    funcpoint = sumplefunc;

    //assigning the values to the function
    int sum= funcpoint(20,50);

    printf("sum: %d\n",sum);

    return 0;
}