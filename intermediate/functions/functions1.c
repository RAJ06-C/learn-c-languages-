#include <stdio.h>
#include <math.h>

int main()
{

    /*
    the functions in c are the common used blocks in the code workflow. there are designed to porform a specific tack. the are classifide in user-defined functions and classic library functions.

    the functions once defined the can call in the code endless the porforms the some tasks we can provide attributs to the functions
    */

    // LIBRARY FUNCTIONS
    printf("\t\t LIBRARY FUNCTIONS\n");
    printf("the the library functions are the comman used functions in the standerd header file\n");

    printf("Predefined functions provided by the C standard library (e.g., printf(), scanf(), sqrt()). They are accessed by including the relevant header file (e.g., <stdio.h>, <math.h>).\n");

    int num;

    printf("Please enter any number: ");
    scanf("%d", &num);

    int sqt = sqrt(num);

    printf("this is also a function call sqrt() %d\n", sqt);

    return 0;
}