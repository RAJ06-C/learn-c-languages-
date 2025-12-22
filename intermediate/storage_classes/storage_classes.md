#  STORAGE CLASSES IN C
---
In C, storage classes define the lifetime, scope, and visibility of variables. They specify where a variable is stored, how long its value is retained, and how it can be accessed which help us to trace the existence of a particular variable during the runtime of a program.

In C, there are **four primary storage classes:**

-  auto
-  register
-  static
-  extern

---

##  AUTO 

This is the default storage class for all the variables declared inside a function or a block. Auto variables can be only accessed within the block/function they have been declared and not outside them (which defines their scope).

**Properties of auto Variables**

-  **Scope:** Local
-  **Default Value:** Garbage Value
-  **Memory Location:** RAM
-  **Lifetime:** Till the end of its scope

---

##  STATIC 

This storage class is used to declare static variables that have the property of preserving their value even after they are out of their scope! Hence, static variables preserve the value of their last use in their scope.

**Properties of static Storage Class**

-  **Scope:** Local
-  **Default Value:** Zero
-  **Memory Location:** RAM
-  **Lifetime:** Till the end of the program

---

##  REGISTER

This storage class declares register variables that have the same functionality as that of the auto variables. The only difference is that the compiler tries to store these variables in the register of the microprocessor if a free register is available making it much faster than any of the other variables.

**Properties of register Storage Class Objects**

-  **Scope:** Local
-  **Default Value:** Garbage Value
-  **Memory Location:** Register in CPU or RAM
-  **Lifetime:** Till the end of its scope

---

##  EXTERN

Extern storage class simply tells us that the variable is defined elsewhere and not within the same block where it is used. Basically, the value is assigned to it in a different block and this can be overwritten/changed in a different block as well.

Also, a normal global variable can be made extern as well by placing the ‘extern’ keyword before its declaration/definition in any function/block.

**Properties of extern Storage Class Objects**

-  **Scope:** Global
-  **Default Value:** Zero
-  **Memory Location:** RAM
-  **Lifetime:** Till the end of the program.