# C Recursion Function Example

This repository contains a simple example of using recursion in the C programming language. Recursion is a technique in which a function calls itself to solve a problem. This example demonstrates a basic recursive function and provides a step-by-step guide on how to create and use recursive functions in C.

## Table of Contents

- [Prerequisites](#prerequisites)
- [Getting Started](#getting-started)
- [Understanding Recursion](#understanding-recursion)
- [Example](#example)
- [Running the Code](#running-the-code)
- [Contributing](#contributing)
- [License](#license)

## Prerequisites

Before you begin, ensure you have the following installed:

- C Compiler (e.g., GCC)

## Getting Started

To get started, you can clone this repository to your local machine using the following command:

```bash
git clone https://github.com/yourusername/c-recursion-example.git
```

Alternatively, you can download the code as a ZIP file and extract it to your preferred directory.

## Understanding Recursion

Recursion is a programming technique in which a function calls itself to solve a problem. In a recursive function, the problem is divided into smaller subproblems, and the function continues to call itself on these subproblems until a base case is reached. The base case is a condition that signals the function to stop calling itself and return a result. Without a base case, the recursion will continue indefinitely, causing a stack overflow.

## Example

In this repository, we have provided a simple example of a recursive function that calculates the factorial of a given positive integer. The factorial of a non-negative integer `n`, denoted as `n!`, is the product of all positive integers from `1` to `n`.

```c
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5; // Change this value to calculate factorial for a different number
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
```

## Running the Code

To run the provided example, follow these steps:

1. Open your terminal or command prompt.

2. Navigate to the directory where you cloned or extracted the code.

3. Compile the code using your C compiler. For example, with GCC, you can use the following command:

```bash
gcc -o factorial factorial.c
```

4. Run the compiled executable:

```bash
./factorial
```

You can change the value of `num` in the `main` function to calculate the factorial for a different number.

## Contributing

If you'd like to contribute to this project by adding more examples or improving the documentation, please feel free to create a pull request. We welcome your contributions!

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
