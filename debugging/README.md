# Debugging Labs

Real programmers spend more time fixing code than writing it. Each lab here gives you a program with deliberate mistakes. Your job is to find and fix them.

| No. | Lab | What you will see | Practise after |
|-----|-----|-------------------|----------------|
| 01 | [Semicolons and Spelling](01-semicolons-and-spelling/README.md) | Compile error | [Unit 01](../units/01-introduction/README.md) |
| 02 | [Braces, Parentheses and Quotes](02-braces-and-quotes/README.md) | Compile error | [Unit 04](../units/04-decisions/README.md) |
| 03 | [Undeclared Names and Scope](03-undeclared-and-scope/README.md) | Compile error | [Unit 02](../units/02-variables-and-types/README.md) |
| 04 | [Type Mismatches](04-type-mismatches/README.md) | Compile error | [Unit 02](../units/02-variables-and-types/README.md) |
| 05 | [Stream Operators and for-loop Syntax](05-stream-operators-and-for/README.md) | Compile error | [Unit 05](../units/05-loops/README.md) |
| 06 | [Function Declaration and Call Errors](06-function-errors/README.md) | Compile error | [Unit 06](../units/06-functions/README.md) |
| 07 | [Array and String Errors](07-arrays-and-strings/README.md) | Compile error | [Unit 07](../units/07-arrays/README.md) |
| 08 | [Class Definition Errors](08-class-errors/README.md) | Compile error | [Unit 11](../units/11-classes/README.md) |
| 09 | [Logic Bug: Wrong Average](09-wrong-average/README.md) | Wrong output | [Unit 02](../units/02-variables-and-types/README.md) |
| 10 | [Logic Bug: = vs == and Missing break](10-assignment-and-fallthrough/README.md) | Wrong output | [Unit 04](../units/04-decisions/README.md) |
| 11 | [Logic Bug: Stray Semicolon and Initial Value](11-stray-semicolon-and-init/README.md) | Wrong output | [Unit 05](../units/05-loops/README.md) |

Labs 01–08 contain **syntax errors**: the compiler refuses to build the program. Labs 09–11 contain **logic bugs**: the program runs but gives the wrong answer.

## How each lab works

Every lab folder contains:

- `README.md`: the task, expected output and the real compiler message
- `buggy.cpp`: the broken program (work on a copy)
- `expected.txt` and, where needed, `input.txt`: what correct behaviour looks like
- `SOLUTION.md` and `fixed.cpp`: the answers (look only after trying)

## How to read a compiler error

```text
buggy.cpp:6:5: error: expected ',' or ';' before 'int'
    6 |     int b = 7;
      |     ^~~
```

1. **File and line**: `buggy.cpp:6:5` is line 6, column 5.
2. **Kind**: `error` stops the build; `warning` does not, but *read warnings*, they often flag real bugs.
3. **Message**: the compiler's best guess. It points at where it *noticed* the problem, which is often the line **after** the real mistake (a missing `;`).
4. **Fix the first error only**, then recompile. Later errors are frequently side effects of the first.

## Debugging checklist

- Compare each line with the examples in the unit notes.
- Check every `;`, `(`, `)`, `{`, `}`, `"`, `'`.
- Check spelling and capital letters.
- For wrong output: print intermediate values with `cout`, and trace the loop by hand with a small input.
