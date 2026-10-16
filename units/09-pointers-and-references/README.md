# Unit 09: Pointers and References

## Learning objectives

By the end of this unit you can:

- Explain addresses, pointers and dereferencing
- Use references to let a function modify its arguments

## Key ideas

- Every variable lives at an **address**. `&x` is the address of `x`.
- A **pointer** stores an address: `int* p = &x;`. `*p` is the value stored there (**dereferencing**).
- `nullptr` means "points to nothing". Never dereference a null or uninitialised pointer.
- Array names convert to pointers: `a[i]` is `*(a + i)`.
- A **reference** is another name for an existing variable: `int& r = x;`. Reference parameters (`void f(int& a)`) let a function change the caller's variable and avoid copies.
- `const int&` passes large objects without copying and without allowing changes.

| | Pointer | Reference |
|--|---------|-----------|
| Can be null | yes | no |
| Can be re-pointed | yes | no |
| Syntax to use | `*p` | just `r` |

## Examples

Compile and run each one yourself, then change it and predict what happens.

- [`pointers.cpp`](examples/pointers.cpp)
- [`references.cpp`](examples/references.cpp)

```bash
g++ -std=c++17 -Wall -Wextra -o prog examples/pointers.cpp
./prog
```

## Practice

1. Write a function that doubles an integer through a pointer.
2. Print an array backwards using a pointer.

## Experiments for this unit

- [Experiment 11: Pointers and Swapping](../../experiments/11-pointers-and-swap/README.md)

---
[← Unit 08](../08-strings/README.md) · [Course home](../../README.md) · [Unit 10 →](../10-structs/README.md)
