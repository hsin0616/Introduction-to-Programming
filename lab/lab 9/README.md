# 9-1 String Length and Character Output
Read a single word (no spaces) into a character array *char s[51]*. Then print two lines:
1. The length of the string (excluding the null terminator \0).
2. Each character of the string is separated by a single space. 
## Input
- One line containing a word *with no spaces (length ≤ 50). 
## Output
- Line 1: len=*length* 
- Line 2: s[0] s[1] s[2] ... s[*length-1*]
## Sample
(1)
| Sample Input|
| -----       |
| Hello       |

| Sample Output |
| -----         |
| len=5         |
| H e l l o     |

(2)
| Sample Input |
| -----        |
| PassTheDemo  |

| Sample Output        |
| -----                |
| len=11               |
| P a s s T h e D e m o|

# 9-2 Lexicographically Smallest Name  
Write a program that reads several names, and prints the one that comes first in lexicographical (dictionary) order.

Please use a fixed-size 2D C-string array (*char names[50][31]*). Do not use std::string.
## Input Format
```text
N M
<name1>
<name2>
...
<nameN>
```
- N: the number of names (1 ≤ N ≤ 50) 
- M: the maximum length of each name (1 ≤ M ≤ 30)
## Output Format
Print one line - the name that comes first lexicographically.
## Hints
- Use strcmp() for comparison. By default, comparisons are case-sensitive ('A'<'a', 'A'<'B', 'a'<'b').
## Sample
(1)
| Sample Input |
| -----        |
```text
6 20
Zoe 
alex 
Bob 
carol 
Amy 
banana
```

| Sample Output |
| -----         |
| Amy           |

(2)
| Sample Input |
| -----        |
```text
5 10 
Apple 
Apex 
brian 
Ant 
Almond 
```

| Sample Output |
| -----         |
| Almond        |
