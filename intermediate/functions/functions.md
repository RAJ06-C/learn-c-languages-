
# 😹 FUNCTIONS IN C

Functions in C are self-contained blocks of code designed to perform a specific task. They are fundamental for structuring C programs, promoting modularity, reusability, and readability

---

## Key aspects of functions in c: 🔑

-   **Purpose:** Functions break down large programs into smaller, manageable units. This simplifies development, debugging, and maintenance.

-   **Types:**
    -   **Library Functions:** Predefined functions provided by the C standard library (e.g., `printf()`, `scanf()`, `sqrt()`). They are accessed by including the relevant header file (e.g., `<stdio.h>`, `<math.h>`).
    -   **User-defined Functions:** Functions created by the programmer to fulfill specific requirements within their program.

---
-   **Components:**
    -   **Function Declaration (Prototype):** Informs the compiler about the function's name, return type, and parameters. It typically appears before `main()` or in a header file.
    ```c
        return_type function_name(parameter_list);
    ```
    -   **Function Definition:** Contains the actual code (function body) that the function executes when called.
    ```c
        return_type function_name(parameter_list) {
        // Function body: statements to be executed
        // Optionally, a return statement
        }
    ```
    -   **Function Call:** Invokes the function to execute its code.
    
    ```c
        function_name(arguments);
    ```
    -----
    -   **Return Type:** pecifies the data type of the value the function returns to the caller. If a function does not return any value, its return type is `void`.

    -   **Parameters:** Variables declared in the function's definition that receive values (arguments) passed during a function call. They allow functions to operate on different data without needing to be rewritten.

---
##  🫴 Example:

```C
#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);

int main() {
    int num1 = 10, num2 = 5;
    int sum;

    // Function call
    sum = add(num1, num2);

    printf("The sum is: %d\n", sum);
    return 0;
}

// Function definition
int add(int a, int b) {
    int result = a + b;
    return result; // Returns the sum
}
```

---

## CALL BY VALUE AND CALL BY REFRENCE

In C, "call by value" and "call by reference" describe how arguments are passed to functions, determining whether changes made within the function affect the original variables in the calling code.

-   ## CALL BY VALUE

    -   **Mechanism:** When a variable is passed by value, a copy of its value is sent to the function. The function operates on this copy, and the original variable in the calling code remains untouched.

    -   **Impact of Changes:** Any modifications made to the parameter inside the function are confined to that function's local scope and do not affect the original variable.


-   ## CALL BY REFRENCE

    -   **Mechanism:** In C, true call by reference (like in C++) is not directly available for primitive types. Instead, it is simulated by passing the address of the variable using pointers. The function then receives a pointer to the original variable, allowing it to directly access and modify the original data.

    -   **Impact of Changes:** Any modifications made using the dereferenced pointer inside the function directly affect the original variable in the calling code.

---

##  POINTER FUNCTION

In C programming, a function pointer is a variable that stores the memory address of a function. This allows you to call functions indirectly, pass functions as arguments to other functions, and implement features like callback mechanisms or state machines.

-   ## Declaration of a Function Pointer:

    The general syntax for declaring a function pointer is:

    ```C
    returnType (*pointerName)(parameterType1, parameterType2, ...);
    ```
    For example, to declare a pointer to a function that takes two `int` arguments and returns an `int`: 

    ```C
    int (*ptr)(int, int);
    ```
-   ## Assigning a Function to a Pointer:

    **You can assign a function's address to a function pointer in two ways:** 

    -    **Using the function name directly:** The function's name, when used without parentheses, implicitly represents its address.

    ```C
        ptr = add; // Assuming 'add' is a function with a matching signature
    ```
    Using the address-of operator (&).

    ```C

        ptr = &add;
    ```
    Both methods achieve the same result.


-   ## Calling a Function Through a Pointer:

    Once a function pointer is assigned, you can call the function it points to in two ways: Dereferencing the pointer explicitly. 

    ```C
        int result = (*ptr)(10, 5);
    ```

    -   **Using the pointer directly as if it were the function name:** This is a more common and often preferred syntax.

    ```C
        int result = ptr(10, 5);
    ```

-   ## Example

    ```C
        #include <stdio.h>

        // A simple function
        int add(int a, int b) {
            return a + b;
        }

        int main() {
            // Declare a function pointer
            int (*funcPtr)(int, int);

            // Assign the 'add' function to the pointer
            funcPtr = add;

            // Call the function using the pointer
            int sum = funcPtr(20, 15);

            printf("Sum: %d\n", sum); // Output: Sum: 35

            return 0;
        }
    ```
