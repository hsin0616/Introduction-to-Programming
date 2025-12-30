# Spiral matrix
- Given a positive integer n, construct an n × n matrix filled with numbers from 1 to n*n in a clockwise spiral order. 
- The starting point is the top-left corner (row 1, column 1), and the initial direction is to the right. 
- When the next cell is out of bounds or already filled, turn clockwise in the order: right → down → left → up.

## Note
- Each number in the same row is separated by a single space. 
- Numbers should be right-aligned with a fixed width w = len(str(n*n)). 
- No trailing spaces are allowed at the end of each line. 
- Constraints: 1 ≤ n ≤ 100

## Input
A single integer n.
## Output
n lines, each containing n numbers arranged in spiral order with proper spacing and alignment. The result should be output to a file name : [stu_ID]_HW2.output 
## Sample
(1)
| Sample Input  |
| -----         |
```text
3
```

| Sample Output |
| -----         |
```text
1 2 3
8 9 4
7 6 5
```
(2)
| Sample Input  |
| -----         |
```text
4
```

| Sample Output |
| -----         |
```text
  1  2  3  4
 12 13 14  5
 11 16 15  6
 10  9  8  7
```
(3)
| Sample Input  |
| -----         |
```text
10
```

| Sample Output |
| -----         |
```text

  1   2   3   4   5   6   7   8   9  10
 36  37  38  39  40  41  42  43  44  11
 35  64  65  66  67  68  69  70  45  12
 34  63  84  85  86  87  88  71  46  13
 33  62  83  96  97  98  89  72  47  14
 32  61  82  95 100  99  90  73  48  15
 31  60  81  94  93  92  91  74  49  16
 30  59  80  79  78  77  76  75  50  17
 29  58  57  56  55  54  53  52  51  18
 28  27  26  25  24  23  22  21  20  19
 ```
