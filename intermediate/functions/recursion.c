#include<stdio.h>

//RECURSION

void recursion(int n){

    //base Case
    if (n==10) return;

    printf("recursion level %d\n",n);
    recursion(n+1);

}

int main(){

    /*
    Recursion is a programming technique where a function calls itself repeatedly until a specific base condition is met. A function that performs such self-calling behavior is known as a recursive function, and each instance of the function calling itself is called a recursive call.
    */

    recursion(1);

    return 0;
}