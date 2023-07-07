# The Magic Growth Pills - Algorithmic task

## Introduction
This was a college assignment for the willing at my university 2 years ago. The task was
to write a C++ console program that would solve a certain issue, without using any
external libraries. If the program passed all teacher's
tests (unknown to students), its creator was exempted from the exam and had a passing grade for the semester.

## Task specification
John has two kinds of magic pills, each of 8 pieces. The first 
kind, when eaten, increases his height twice. The other one, reduces it 
by 100 centimeters. The task is to find the smalles amount of pills,
needed to change John's height from given X to given Y. The test consists of
up to 100 pairs of X and Y, where both may be a value between 1 and 100 000
centimeters. Negative height values are not allowed, and there may be pairs
that are impossible to solve. The test is given to the standard input, and an
example of it looks like this:

Z
X1 Y1
X2 Y2
X3 Y3

where Z is the number of X/Y pairs (in this case it would be 3).

## Solution
I've noticed, that every combination of eating magic pills in a particular order may be
graphically represented as a path of single moves on 8x8 chessboard, starting from the
left top corner to the right bottom one. My solution includes a 2d [8,8] array of integers
simulating a chessboard and an algorithm, that checks every possible path starting from
the left top corner.

## Conclusions
I enjoyed solving the issue though it was quite chellenging. My solution passed all the tests, 
but it was far from perfect. Unfortunatelly, I didn't know recursion back then, which could
be used to solve it in a way easier and simpler manner.
