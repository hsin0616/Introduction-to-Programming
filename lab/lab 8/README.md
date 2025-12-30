# 8-1 Cyclic Rotation
Performs a cyclic right rotation on an array of integers. Given an array of size 5 and an integer K, rotate all elements to the right by K positions. Elements shifted beyond the end of the array wrap around to the beginning. 
## Input
- The first line contains an integer, K. 
- The second line contains 5 integers, representing the array elements.
## Output
- Print the array after rotation as 5 integers separated by spaces. 
- The valid range is:  0 ≤ K ≤ 100.
- You must use basic arrays (no STL containers). 
## Sample
(1)
| Sample Input   |
| -----          |
| 2              |
| 10 20 30 40 50 |

| Sample Output  |
| -----          |
| 40 50 10 20 30 |

(2)
| Sample Input |
| -----        |
| 14           |
| 1 2 3 4 5    |

| Sample Output |
| -----         |
| 2 3 4 5 1     |

# 8-2 Matrix Product Sum  
Reads two integers m and n, constructs two matrices: A and B.
$$
A = \begin{bmatrix}
m & m+1 & m+2 \\\\
m+3 & m+4 & m+5
\end{bmatrix}
$$
$$
B = \begin{bmatrix}
m & m+3 & m+6 & m+9 \\\\
m+1 & m+4 & m+7 & m+10 \\\\
m+2 & m+5 & m+8 & m+11
\end{bmatrix}
$$

Computes the product C=A×B (matrix multiplication), and outputs a single integer equal to the sum of all entries of C. 
## Rules
- Input: two integers: −200 ≤ 𝑚,𝑛 ≤ 200. 
- Use only basic arrays (no STL containers). 
## Sample
(1)
| Sample Input |
| -----        |
| 1 2          |

| Sample Output |
| -----         |
| 646           |

(2)
| Sample Input |
| -----        |
| 0 0          |
| 346          |

| Sample Output |
| -----         |
| 346           |
