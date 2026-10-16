# Experiments

Each experiment folder includes a lab-record page, a C++ program, and sample input/output. **Core experiments are numbered 01–30.** Experiments 31–32 are optional extension activities; use them for extra practice or a short mini-project.

Try to solve the problem from its Aim and Algorithm before reading `main.cpp`. For every program, test the provided sample, a different normal input, and at least one boundary or invalid input.

| No. | Experiment | Related notes | Level |
|---:|---|---|---|
| 01 | [Hello World and Sum of Two Numbers](01-hello-and-sum/README.md) | [Unit 01](../units/01-introduction/README.md) | Core |
| 02 | [Temperature Conversion](02-temperature-conversion/README.md) | [Unit 02](../units/02-variables-and-types/README.md) | Core |
| 03 | [Grade Calculator](03-grade-calculator/README.md) | [Unit 04](../units/04-decisions/README.md) | Core |
| 04 | [Simple Calculator using switch](04-menu-calculator/README.md) | [Unit 04](../units/04-decisions/README.md) | Core |
| 05 | [Factorial and Prime Numbers](05-prime-and-factorial/README.md) | [Unit 05](../units/05-loops/README.md) | Core |
| 06 | [Fibonacci Series and Pyramid Pattern](06-fibonacci-and-patterns/README.md) | [Unit 05](../units/05-loops/README.md) | Core |
| 07 | [GCD, LCM and Power using Functions](07-gcd-and-power/README.md) | [Unit 06](../units/06-functions/README.md) | Core |
| 08 | [Array Statistics and Bubble Sort](08-array-statistics/README.md) | [Unit 07](../units/07-arrays/README.md) | Core |
| 09 | [Matrix Addition and Multiplication](09-matrix-operations/README.md) | [Unit 07](../units/07-arrays/README.md) | Core |
| 10 | [String Operations and Palindrome](10-string-operations/README.md) | [Unit 08](../units/08-strings/README.md) | Core |
| 11 | [Pointers and Swapping](11-pointers-and-swap/README.md) | [Unit 09](../units/09-pointers-and-references/README.md) | Core |
| 12 | [Student Records using Structures](12-student-records/README.md) | [Unit 10](../units/10-structs/README.md) | Core |
| 13 | [Bank Account using a Class](13-bank-account/README.md) | [Unit 11](../units/11-classes/README.md) | Core |
| 14 | [File Handling and Vectors](14-file-and-vector-marks/README.md) | [Unit 12](../units/12-files-and-vectors/README.md) | Core |
| 15 | [Operators and Expression Evaluation](15-operators-and-expressions/README.md) | [Unit 03](../units/03-operators-and-io/README.md) | Core |
| 16 | [Simple Interest and Discount Calculator](16-simple-interest-and-discount/README.md) | [Unit 02](../units/02-variables-and-types/README.md), [Unit 03](../units/03-operators-and-io/README.md) | Core |
| 17 | [Eligibility and Leap-Year Checker](17-eligibility-and-leap-year/README.md) | [Unit 04](../units/04-decisions/README.md) | Core |
| 18 | [Number Properties](18-number-properties/README.md) | [Unit 05](../units/05-loops/README.md) | Core |
| 19 | [Multiplication Table and Digit Sum](19-multiplication-table-and-digit-sum/README.md) | [Unit 05](../units/05-loops/README.md) | Core |
| 20 | [Menu-Driven Unit Converter](20-menu-driven-converter/README.md) | [Unit 04](../units/04-decisions/README.md) | Core |
| 21 | [Functions and Function Overloading](21-functions-and-overloading/README.md) | [Unit 06](../units/06-functions/README.md) | Core |
| 22 | [Recursion: Sum and Factorial](22-recursion-practice/README.md) | [Unit 06](../units/06-functions/README.md) | Core |
| 23 | [Linear Search in an Array](23-linear-search/README.md) | [Unit 07](../units/07-arrays/README.md) | Core |
| 24 | [Selection Sort](24-selection-sort/README.md) | [Unit 07](../units/07-arrays/README.md) | Core |
| 25 | [Matrix Transpose and Diagonal Sums](25-matrix-transpose-diagonal/README.md) | [Unit 07](../units/07-arrays/README.md) | Core |
| 26 | [String Analyzer](26-string-analyzer/README.md) | [Unit 08](../units/08-strings/README.md) | Core |
| 27 | [References and Pass-by-Reference](27-reference-based-functions/README.md) | [Unit 06](../units/06-functions/README.md), [Unit 09](../units/09-pointers-and-references/README.md) | Core |
| 28 | [Multiple Student Records](28-student-records-array/README.md) | [Unit 10](../units/10-structs/README.md) | Core |
| 29 | [Rectangle Class and Encapsulation](29-rectangle-class/README.md) | [Unit 11](../units/11-classes/README.md) | Core |
| 30 | [Expense Summary Using Vector](30-vector-expense-summary/README.md) | [Unit 12](../units/12-files-and-vectors/README.md) | Core |
| 31 | [Text File Line and Word Counter](31-file-line-word-counter/README.md) | [Unit 12](../units/12-files-and-vectors/README.md) | Extension |
| 32 | [Mini Project: Multiple-Choice Quiz](32-mini-project-quiz/README.md) | [Unit 02](../units/02-variables-and-types/README.md), [Unit 04](../units/04-decisions/README.md), [Unit 05](../units/05-loops/README.md), [Unit 07](../units/07-arrays/README.md) | Extension |

## Running an experiment

```bash
cd experiments/05-prime-and-factorial
g++ -std=c++17 -Wall -Wextra -pedantic -o prog main.cpp
./prog < input.txt
```

From the repository root, use `make` to compile the examples and experiments or `make run-exp N=05` to run a numbered experiment.
