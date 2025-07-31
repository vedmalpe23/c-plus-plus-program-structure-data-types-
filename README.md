# c-Program-Structure-Data-Types-
## Description
This simple C++ console program demonstrates the use of basic data types by allowing the user to input values of different types. It then outputs the entered values along with the memory size (in bytes) occupied by each variable.
# C++ Data Types Overview

## Primitive Built-in Types

| Type              | Keyword      |
|-------------------|--------------|
| Boolean           | bool         |
| Character         | char         |
| Integer           | int          |
| Floating point    | float        |
| Double floating point | double    |
| Valueless         | void         |
| Wide character    | wchar_t      |

## Data Types Details

| Type                | Typical Width | Typical Range / Description                              |
|---------------------|---------------|----------------------------------------------------------|
| char                | 1 byte        | -127 to 127 or 0 to 255                                  |
| unsigned char       | 1 byte        | 0 to 255                                                |
| signed char         | 1 byte        | -127 to 127                                            |
| int                 | 4 bytes       | -2,147,483,648 to 2,147,483,647                         |
| unsigned int        | 4 bytes       | 0 to 4,294,967,295                                     |
| signed int          | 4 bytes       | -2,147,483,648 to 2,147,483,647                         |
| short int           | 2 bytes       | -32,768 to 32,767                                       |
| long int            | 8 bytes       | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| signed long int     | 8 bytes       | same as long int                                        |
| unsigned long int   | 8 bytes       | 0 to 18,446,744,073,709,551,615                         |
| long long int       | 8 bytes       | -(2^63) to (2^63)-1                                     |
| unsigned long long int | 8 bytes     | 0 to 18,446,744,073,709,551,615                         |
| float               | 4 bytes       | ±1.17549e-38 to ±3.40282e+38 (IEEE 754)                  |
| double              | 8 bytes       |±2.22507e-308 to ±1.79769e+308 (IEEE 754)                 |
| long double         | 12 bytes      |Usually wider than double, e.g., ±3.3621e-4932 to ±1.18973e+4932 (on some systems)|
| wchar_t             | 2 or 4 bytes  | 1 wide character                                        |
---

### **Summary: Storage Classes in C++**

Storage classes in C++ define the **scope (visibility)**, **lifetime**, and **location** of variables and functions. They determine how and where a variable is stored, whether its value persists after function calls, and who can access it.

#### **Types of Storage Classes:**

1. **`auto`**

   * Default for local variables.
   * Automatically deduced type (in modern C++, `auto` also has type inference usage).

2. **`register`**

   * Suggests storing variable in a CPU register for faster access.
   * Cannot take the address of a register variable.
   * Size is limited to register size.

3. **`static`**

   * Retains the variable's value between function calls.
   * Extends the lifetime of local variables to the entire program duration.

4. **`extern`**

   * Declares a global variable or function defined in another file.
   * Useful for sharing data between multiple files.

5. **`mutable`**

   * Allows modification of class members even if the object is declared `const`.


### **Conclusion:**

Understanding and using the correct **storage class** is crucial for managing memory efficiently, maintaining variable scope, and ensuring correct program behavior. Whether optimizing speed using `register`, retaining data with `static`, or sharing information across files with `extern`, each storage class serves a specific purpose in professional C++ development.
