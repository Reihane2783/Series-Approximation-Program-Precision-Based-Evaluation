# Numerical Series Calculation in C

A C program that evaluates a numerical series for an input value satisfying `0 < x < 1`.

## Overview

The program:

- Reads a floating-point value `x`
- Validates that `0 < x < 1`
- Iteratively calculates terms of a numerical series
- Alternates the sign of successive terms
- Stops when the current summand becomes smaller than `1e-4`
- Prints the resulting value `S`

## Method

For each iteration, the program calculates:

```text
numerator   = x^(2(i-1))
denominator = (-1)^(i+1) * x^i / i
