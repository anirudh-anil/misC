# Miscellaneous C Programs

### Table of Contents

- [Miscellaneous C Programs](#miscellaneous-c-programs)
    - [Table of Contents](#table-of-contents)
  - [Program 1 - Areas](#program-1---areas)
  - [Program 2 - Electricity Bill](#program-2---electricity-bill)
  - [Program 3 - Quadratic Equation Solver](#program-3---quadratic-equation-solver)
  - [program 4 - Menu Driven Calculator](#program-4---menu-driven-calculator)
  - [Program 5 - Sum of Digits](#program-5---sum-of-digits)
  - [Program 6 - Primes in a Given Range](#program-6---primes-in-a-given-range)
  - [Program 7 - Sine and Cosine Series](#program-7---sine-and-cosine-series)
  - [Program 8 - Pascal's Triangle](#program-8---pascals-triangle)

## Program 1 - Areas

write a program to find the areas of a triangle, square and a rectangle.

[program](./areas.c)

## Program 2 - Electricity Bill

write a program for electricity bill preparation, using the below data:

| Consumption units | Price rate |
| :-----------------: | :-------    |
| 0 - 200 | 0.5₹/unit|
| 201 - 400 | 100 + 0.65₹/excess unit |
| 401 - 600 | 230 + 0.8₹/excess unit|
| 601 and above | 390 + 1₹/excess unit |

[program](./billprep.c)

## Program 3 - Quadratic Equation Solver 

write a program to find the roots of a quadratic equation

[program](./quadratic.c)

> [!IMPORTANT]
> Compile with the flag -lm \
> ie link math library \
> `gcc quadratic.c -lm`

## program 4 - Menu Driven Calculator

write a menu driven calculator program using switch statement

[program](./calculuator.c)

## Program 5 - Sum of Digits

write a program to find the sum of digits of a given small integer

[program](./sumofdigits.c)

## Program 6 - Primes in a Given Range

write a program to print out the prime numbers in a given range of numbers
[program](./primes.c)

## Program 7 - Sine and Cosine Series

write a program to print sine and cosine values of an angle using taylor expansion/maclaurin series of them, given the angle measurement and number of terms to use.
```math
\sin(x) = x - \frac{x^3}{3!} + \frac{x^5}{5!} \cdots = \displaystyle\sum_{i=0}^{\infty}\frac{(-1)^i}{(2i+1)!}x^{2i+1} 
```

$$\cos(x) = 1 - \frac{x^2}{2!} + \frac{x^4}{4!} \cdots = \displaystyle\sum_{i=0}^{\infty}\frac{(-1)^i}{(2i)!}x^{2i}$$


[program](./sine_cosine.c)


## Program 8 - Pascal's Triangle

write a program that displays the pascals triangle, given the number of rows

[program](./pascals_triangle.c)