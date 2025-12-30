# 4-1 Random number
Write a program that reads two integers a and b from the user, and then generates a random integer between them (inclusive).

## Requirements
Program should work no matter which number is larger.
- If the user enters 5 10, the random number should be between 5 and 10.
- If the user enters 10 5, the random number should still be between 5 and 10.

## Sample
| Sample Input  |
| -----         |
| 2 10          |

| Sample Output |
| -----         |
| 3             |

# 4-2 Height of the longest side
Write a program that calculates the height of the longest side of a triangle.

**Hero's Formula**
$$
A=\sqrt{s(s-a)(s-b)(s-c)}, \quad s=\frac{a+b+c}{2}
$$
- a, b, c = the lengths of the sides of a triangle
- A = the area of the triangle
- s = the semiperimeter of the triangle

## Sample
| Sample Input (given csv file) | 
| -----                         |
```text
3
4
5
```

| Sample Output |
| -----         |
```text
The height of the longest side: 2.4
```
