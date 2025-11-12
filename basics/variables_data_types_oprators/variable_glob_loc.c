#include<stdio.h>

// EXAMPLE AND EXPLANATION OF LOCAL AND GLOBAL VARIABLES

// GLOBAl VARIABLES
/*
the global varaibles are the globaly deffined variables in the scope 
the global varaibles can be store a value 
the global varaibles are can be access any ware in the code section
example:
*/

//gobal variable declaration
int age=10;

//local variable declaration in function
int drive(){
    int function_age=20;
}
int main(){

    printf("\t\tGLOBAL VARIABLE\n");
    //varible accessing 
    printf("we can print global variable %d\n",age);

    printf("\t\tLOCAL VARIABLE\n");
    printf("the local variable is defined in the function ge canot access the variable\n");
    // calling the function also we cant access the variable
    drive();
    //varible accessing it will throw an error
    
    // printf("%d",function_age);


    return 0;
}