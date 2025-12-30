# 10-1 String Length and Character Output
Read a CSV file names **10_1.csv** that records daily transactions. Each line cotains two values.
- an **item name**
- the **amount of money** (positive for income and negative for expense)
Calculate and print the **final balance** in the bank account.
## Input
Each line in the file 10_1.csv follows the format: Item, Amount
## Output
Final Balance: <calculated_amount>
## Sample
(1)
| Sample Input  |
| -----         |
```text
Salary,30000 
Lunch,-120 
Coffee,-60 
Book,-500 
Bonus,2000
```

| Sample Output         |
| -----                 |
| Final Balance: 31320  |


# 10-2 Character Frequency Analysis
Read 10_2.txt and count how many times each English letter (A–Z or a–z) appears. Letters should be treated case-insensitively (‘A’ and ‘a’ are the same). Ignore any non-alphabetic characters such as spaces, numbers, or punctuation marks.

After counting, print the top 5 most frequent letters. If multiple letters have the same frequency, output the letter with the smaller alphabetical order first (A before B, etc.). 
## Input Format
Each line in input.txt contain letters, numbers, spaces, or punctuation.
## Output Format
Show the top 5 most frequent letters, in the format 
Top rank: letter (count) 
## Sample
(1)
| Sample Input  |
| -----         |
```text
Hello world! 
This is a simple test. 
HELLO again. 
```

| Sample Output |
| -----         |
```text
Top 1: L (6)
Top 2: E (4)
Top 3: I (4)
Top 4: S (4)
Top 5: A (3)
```
