# Experiments

Each experiment folder contains a `README.md` laid out as a lab record (**Aim, Theory, Algorithm, Program, Sample Input/Output, Result, Viva Questions**) and the program in `main.cpp`. The `input.txt` and `output.txt` files hold the sample run.

Try to solve the experiment yourself from the Aim and Algorithm before reading the Program section.

| No. | Experiment | Related notes |
|-----|------------|---------------|
| 01 | [Hello World and Sum of Two Numbers](01-hello-and-sum/README.md) | [Unit 01](../units/01-introduction/README.md) |
| 02 | [Temperature Conversion](02-temperature-conversion/README.md) | [Unit 02](../units/02-variables-and-types/README.md) |
| 03 | [Grade Calculator](03-grade-calculator/README.md) | [Unit 04](../units/04-decisions/README.md) |
| 04 | [Simple Calculator using switch](04-menu-calculator/README.md) | [Unit 04](../units/04-decisions/README.md) |
| 05 | [Factorial and Prime Numbers](05-prime-and-factorial/README.md) | [Unit 05](../units/05-loops/README.md) |
| 06 | [Fibonacci Series and Pyramid Pattern](06-fibonacci-and-patterns/README.md) | [Unit 05](../units/05-loops/README.md) |
| 07 | [GCD, LCM and Power using Functions](07-gcd-and-power/README.md) | [Unit 06](../units/06-functions/README.md) |
| 08 | [Array Statistics and Bubble Sort](08-array-statistics/README.md) | [Unit 07](../units/07-arrays/README.md) |
| 09 | [Matrix Addition and Multiplication](09-matrix-operations/README.md) | [Unit 07](../units/07-arrays/README.md) |
| 10 | [String Operations and Palindrome](10-string-operations/README.md) | [Unit 08](../units/08-strings/README.md) |
| 11 | [Pointers and Swapping](11-pointers-and-swap/README.md) | [Unit 09](../units/09-pointers-and-references/README.md) |
| 12 | [Student Records using Structures](12-student-records/README.md) | [Unit 10](../units/10-structs/README.md) |
| 13 | [Bank Account using a Class](13-bank-account/README.md) | [Unit 11](../units/11-classes/README.md) |
| 14 | [File Handling and Vectors](14-file-and-vector-marks/README.md) | [Unit 12](../units/12-files-and-vectors/README.md) |

## Running an experiment

```bash
cd experiments/05-prime-and-factorial
g++ -std=c++17 -Wall -Wextra -o prog main.cpp
./prog < input.txt     # feed the sample input
./prog                 # or type your own input
```

From the repository root you can also use `make run-exp N=05` (see the top-level [README](../README.md)).
