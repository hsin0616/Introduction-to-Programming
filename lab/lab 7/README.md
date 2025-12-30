# 7-1 Palindrome Number
Write a program to determine whether an integer is a palindrome number. A palindrome number is defined as a number that reads the same forward and backward.
> For example: 121, 12321, and 1221 are palindromes; 123 and 120 are not.
## Input
- A positive integer n (1 ≤ n ≤ 1000000)

## Output
- Print "Yes" if n is a palindrome.
- Print "No" otherwise.

## Constraints
Must finish the functions:
```text
int reverse(int n);

bool isPalindrome(int n);
```

## Sample
(1)
| Sample Input  |
| -----         |
|12321|

| Sample Output |
| -----         |
|Yes|

(2)
| Sample Input  |
| -----         |
|1234|

| Sample Output |
| -----         |
|No|

# 7-2 Climbing Stairs
Climbing a staircase with n steps. At each move, you can climb either 1 step or 2 steps. However, you ar not allowed to land on any step that is a multiple of 3.

Print all valid paths to reach exactly step n. Each path should be represented as a sequence of steps you land on, starting from 0 (ground) and ending at n.

## Input
- One integer n (1 ≤ n ≤ 10).

## Output
- Print all valid paths, one per line.
- If no valid path exists, print "no solution".

## Constraints
- Solve the problem using recursion.
- Iterative solutions with loops controlling the path generation are not allowed.
- Implement a helper function such as :
> volid climb(int curr, int target, string path);
where path records the current sequence of steps.

## Sample
(1) 
| Sample Input (given csv file) | 
| -----                         |
|4|

| Sample Output |
| -----         |
```text
0 1 3 4
0 2 4
```
(2)
| Sample Input | 
| -----        |
|5|

| Sample Output |
| -----         |
```text
0 1 2 4 5
0 2 4 5
```

(3)
| Sample Input | 
| -----        |
|6|

| Sample Output |
| -----         |
```text
no solution
```