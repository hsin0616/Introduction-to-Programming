# Keyword Search and Marking
1. Read one sentence (which may contain spaces, up to 100 characters) and one keyword (without spaces, up to 30 characters). 
2. You need to find the first occurrence of the keyword in the sentence, ignoring letter case, and then print the index (starting from 0) of the first match on the first line. ( Print -1 if not found )
3. Then, print the same sentence on the second line, but with the first occurrence of the keyword wrapped in square brackets [].
4. If the keyword is not found, print the original sentence. 
## Input format
- Line 1: A sentence (≤ 100 characters). Read with cin.getline().
- Line 2: A keyword (≤ 30 characters, no spaces). Read with cin >>. 
## Output Format : 
- Line 1: An integer index (-1 if not found). 
- Line 2: The modified sentence (or the original if not found). 
## Sample
(1)
| Sample Input  |
| -----         |
```text
HeLLo, C-String world! 
hello
```

| Sample Output |
| -----         |
```text
0 
[HeLLo], C-String world!
```
(2)
| Sample Input  |
| -----         |
```text
, , , 
bsbs
```

| Sample Output |
| -----         |
```text
-1 
, , , 
```