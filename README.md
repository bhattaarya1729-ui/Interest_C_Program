# Interest_C_Program
Console-based Interest Calculator in C. Computes Simple and Compound Interest using modular functions and a menu-driven interface. Accepts principal, rate, and time as input, supports repeated calculations with a loop, and uses the math library (pow) for compound interest computation. Suitable for practicing functions and control flow.
# Interest Calculator in C

A console-based Interest Calculator written in C that calculates:

- Simple Interest  
- Compound Interest  

The program uses a menu-driven interface and allows repeated calculations until the user chooses to exit.

---

## Features

- Calculates Simple Interest
- Calculates Compound Interest
- Uses modular functions
- Menu-driven user input
- Continuous execution using do-while loop
- Uses math.h library for compound interest calculation

---

## Formulas Used

### Simple Interest
SI = (P × R × T) / 100

### Compound Interest
CI = P(1 + R/100)^T − P

Where:
- P = Principal amount  
- R = Rate of interest  
- T = Time period  

---

## Requirements

- GCC or any C compiler
- math library (-lm flag required while compiling)

---

## How to Compile and Run

### Compile:
gcc filename.c -o interest -lm

### Run:
./interest

---

## Concepts Practiced

- Functions
- Conditional statements (if-else)
- do-while loop
- User input handling
- Mathematical computations using pow()

---

## Future Improvements

- Add monthly/quarterly compounding options  
- Add input validation for negative values  
- Add file storage for calculation history  
- Convert into a more advanced financial calculator  

---

## Author

Aarya Bhatt
