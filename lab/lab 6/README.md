# 6-1 Count zeros until stop
Write a program that keeps reading integers from the user one by one.
> If the input is '0', keep counting.
> If the input is '1', print the number of zeros entered before the first '1' and stop the program.

## Input
- A single line containing only '0' or '1' separated by spaces.
- The input will always contain at least one '1'.

## Hint & Reminder
- The input might contain several '1'. But have to print the answer right after reading the first '1'.
- Use a loop 'while(true)' with 'cin' inside. Use 'break' when need to leave the loop.

## Constraints
- length(input) < 30
- All the input number ∈ {0, 1}
- The input consists of exactly one line

## Sample
(1)
| Sample Input  |
| -----         |
|0 0 1 1 0 0 1 0|

| Sample Output |
| -----         |
|2|

(2)
| Sample Input  |
| -----         |
|1 0 0 0 0 0 0 1 0 0 1|

| Sample Output |
| -----         |
|0|

(3)
| Sample Input  |
| -----         |
|0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 1 1|

| Sample Output |
| -----         |
|13|

# 6-2 Inverted Pyramid
Write a program to print an inverted pyramid composed of numbers. Please print it based on the input number n as shown in the sample input / output.
- Input only one integer (int), **n**: the number of the pyramid levels.

## Constraint:
- n ∈ integer (int)
- 0 ≤ n ≤ 9

## Sample
(1) 
| Sample Input (given csv file) | 
| -----                         |
|9|

| Sample Output |
| -----         |
```text
12345678987654321
 123456787654321
  1234567654321
   12345654321
    123454321
     1234321
      12321
       121
        1
```
(2)
| Sample Input | 
| -----        |
|0|

| Sample Output (PRINT NOTHING) |
| -----         |
```text

```