#include<stdio.h>
#include "temp.c"

int global=40;

extern int external;

int autofuunc(){

    //this auto storage function is deffined with in the autofunc function 
    //and can not be access by the other function
    auto int x=5;

    printf("this is the global variable %d\n",global);
}


int myfunc(){

    //example of external variable
    printf("external variable %d\n",external);
}

void counter() {
  
    // Static variable retains value between calls
    static int count = 0;  
    count++;
    printf("Count = %d\n", count);
}

int main(){

    //AUTO CLASS

    //this is the deffault storage class limited to specific block only 
    // auto is optional here, as it's the default storage class
    
    auto int num=10;

    autofuunc();

    
    printf("%d\n",num);
    
    //EXTERNAL CLASS
    
    //external class is the storage variable whare the variable can be access any whare it is a global variable
    
    printf("the external class %d\n",global);

    printf("the external variable\n");

    myfunc();

    //STATIC CLASS

    /*
    This storage class is used to declare static variables that have the property of preserving their value even after they are out of their scope! Hence, static variables preserve the value of their last use in their scope.
    */

    // Prints: Count = 1
    counter();  
  
    // Prints: Count = 2
    counter(); 

    //RIGISTER

    /*
    This storage class declares register variables that have the same functionality as that of the auto variables. The only difference is that the compiler tries to store these variables in the register of the microprocessor if a free register is available making it much faster than any of the other variables.
    */

    // Suggest to store in a register
    register int i;  
    for (i = 0; i < 5; i++) {
        printf("%d ", i);
    }

    return 0;
}