Euclid's Algorithm
==================

This is one of the first known algorithms.

**Problem statement:** Given two positive integers, a and b, compute the
*greatest common divisor*, that is, the largest positive number that
evenly divides a and b.

**Time complexity:** `O(log y)` in the worst case (when x and y are
consecutive Fibonacci numbers).

Extended Euclid's Algorithm
===========================

**Problem statement:** Given two positive integers, a and b, compute the
*greatest common divisor*, that is, the largest positive number that
evenly divides a and b, and two integers, possibly negative, x and y, such that

> a * x + b * y = gcd(a, b)

(Bezout's Identity)

**Time complexity:** `O(log y)` in the worst case (when x and y are
consecutive Fibonacci numbers).

**Examples:**

Input:

> 4
> 
> 3
> 
> 10
> 
> 5
> 
> 234
> 
> 69
> 
> 1769
> 
> 551

Output:

> 1
> 
> x = 1 y = -1
> 
> 5
> 
> x = 0 y = 1
> 
> 3
> 
> x = -5 y = 17
> 
> 29
> 
> x = 5 y = -16

