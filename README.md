This repository contains 5 C programs that demonstrate the basics of pointers, pointer arithmetic, functions with pointers, double pointers, and character pointers.  
Each assignment includes source code and a short analysis of how it works.

---

## Assignment 1: Basics of Pointers (`a1_basics.c`)

**Summary:**  
Declares an integer `x` and a pointer `px` pointing to it. Prints the value and memory address of `x` using both `&x` and the pointer, then modifies `x` through the pointer.

**How it works:**  
- `&x` gives the address of `x`.  
- `px` stores this address.  
- `*px` dereferences the pointer to read/write the value.  

**Observations:**  
- The addresses printed by `&x` and `px` are the same.  
- Changing `*px` directly changes the value of `x`.

---

## Assignment 2: Pointer Arithmetic (`a2_pointer_arithmetic.c`)

**Summary:**  
Creates an integer array and a pointer to its first element. Traverses the array using pointer arithmetic (`*(p + i)`), modifies elements, and prints results using both pointer and array name.

**How it works:**  
- When incremented, `p` advances by `sizeof(int)` bytes.  
- `*(p + i)` is equivalent to `arr[i]`.  

**Observations:**  
- Arrays decay into pointers when passed or assigned.  
- Pointer arithmetic respects the type size, so adding 1 moves to the next `int`.

---

## Assignment 3: Pointers and Functions (`a3_swap.c`)

**Summary:**  
Implements a function `swap(int *a, int *b)` that exchanges values of two integers. The `main` function demonstrates swapping by passing addresses.

**How it works:**  
- Passing `&a` and `&b` lets `swap` modify the caller’s variables.  
- `*a` and `*b` allow access to the actual integers.

**Observations:**  
- Pointers enable functions to alter variables outside their own scope.  
- Without pointers, only copies of the variables would be swapped.

---

## Assignment 4: Pointers to Pointers (`a4_double_pointer.c`)

**Summary:**  
Demonstrates the use of a double pointer. Declares `int x`, a pointer `px`, and a pointer to pointer `ppx`. Prints and modifies `x` through both levels of indirection.

**How it works:**  
- `*px` gives the value of `x`.  
- `**ppx` also gives the value of `x`, but via two dereferences.  

**Observations:**  
- Double pointers are useful when we need to modify pointers themselves (e.g., dynamic memory or 2D arrays).  
- Assigning `**ppx = 45;` directly changes `x`.

---

## Assignment 5: Strings and Character Pointers (`a5_strings.c`)

**Summary:**  
Declares a string `char str[] = "Hello";` and uses a pointer to traverse and print it. Counts characters using pointer arithmetic instead of indexing.

**How it works:**  
- A string in C is an array of characters ending with `'\0'`.  
- A pointer can walk through each character until `'\0'`.  
- Subtracting two pointers (`q - start`) gives the string length.  

**Observations:**  
- `p++` moves one character forward each loop.  
- Strings can be manipulated without using `str[i]` indexing, just by pointer arithmetic.

---

## How to Build and Run

### Compile all programs
```bash
gcc -Wall -Wextra -O2 a1_basics.c -o a1
gcc -Wall -Wextra -O2 a2_pointer_arithmetic.c -o a2
gcc -Wall -Wextra -O2 a3_swap.c -o a3
gcc -Wall -Wextra -O2 a4_double_pointer.c -o a4
gcc -Wall -Wextra -O2 a5_strings.c -o a5
