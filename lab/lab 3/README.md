# 3-1 Simple file input practice
Given a file named "data.txt" with exactly three lines. Each line in the file contains two integers (int).

For each line,
calculate its sum, difference, product, and quotient of the two numbers.
Print the results line by line as the sample output provided below.

## Constraints
```text
- all the input numbers ∈ integer (int)
- calculation result ∈ integer (int)
- The second number in each row ≠ 0
```

## Testcase
| data.txt (Use the function in <fstream> to read it.) |
| -----------------------------------------------------|
| 8  2                                                 |
| 15 3                                                 |
| 20 5                                                 |

| Sample Output (Only need to print it (use cout). Do not export any files.) |
| -----------------------------------------------------|
|Line 1: Sum=10, Diff=6, Prod=16, Quot=4|
|Line 2: Sum=18, Diff=12, Prod=45, Quot=5|
|Line 3: Sum=25, Diff=15, Prod=100, Quot=4|

# 3-2 Cafe receipt
Read the given product name (string), quantity (int), and unit price (double), cashier name (string).

Print a small receipt with aligned columns and two-decimal numbers.
## Input (four lines, in the order)
- product name
- quantity
- unit price
- cashier name

## Formatting rules
- Header row with columns: Item, Qty, Unit, Total
- Use **setw** to align:
1. Item: left, width 20
2. Qty: right, width 6
3. Unit: right, width 10
4. Total: right, width 12
- Use **fixed** and **setprecision(2)** for all the numbers **except quantity (Qty)**.
- Total = quantity * unit_price
- Print exaclt the four columns and the **cashies name** in the last line.

## Reminder
- Use std::cin and its relevant functions (ignore(), getline()... ) to get all the inputs.
- If the sample input lines contain trailing whitespace on the end, remove it manually to avoid errors between **cin** and **getline()**.

## Constraints
- 0 < quantity, unit_price < 10000
- length(product name) < 18
- length(cashier name) < 100
- 0 < quantity * unit_price < 10000

## Sample
(1) 
| Sample Input                  | 
| -----                         |
```text
Latte
77
45.50
TungSahur
```

| Sample Output |
| -----         |
```text
Item                Qty   Unit      Total       
Latte               77    45.50     3503.50     
TungSahur
```
(2)
| Sample Input | 
| -----        |
```text
Diamond Latte
1
9999.9
Tralalero Tralala
```

| Sample Output |
| -----         |
```text
Item                Qty   Unit      Total       
Diamond Latte       1     9999.90   9999.90     
Tralalero Tralala
```