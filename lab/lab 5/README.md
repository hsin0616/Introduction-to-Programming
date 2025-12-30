# 5-1 Sort three numbers
Write a program that reads three integers from the user, and then outputs them in non-decreasing order.
## Requirements
- Must not use any built-in sorting/algorithm libraries or functions (e.g. #include algorithm, std::sort, std::stable_sort, etc.). Use only basic comparisons
and swaps to sort.
## Sample
(1)
| Sample Input  |
| -----         |
|7 4 10 |

| Sample Output |
| -----         |
|4 7 10|

(2)
| Sample Input  |
| -----         |
|77 77 28|

| Sample Output |
| -----         |
|28 77 77|

(3)
| Sample Input  |
| -----         |
|100 0 -100|

| Sample Output |
| -----         |
|-100 0 100|

# 5-2 Taxi fare calculator
Write a program to calculate a taxi fare based on the distance.

## Requirements
- Input: one floating-point number (travel distance, unit = 0.1 km).
- Rules:
1. Base fare: $70 if distance ≤ 1.5 km.
2. If distance > 1.5 km: Charge $5 for every additional 0.1km.
3. If distance > 20.0 km: Add a 10% surcharge (no rounding) after calculating the total.
4. Output the final fare (can be decimal).

## Sample
(1) 
| Sample Input (given csv file) | 
| -----                         |
|1.5|

| Sample Output |
| -----         |
|70|

(2)
| Sample Input | 
| -----        |
|2.0|

| Sample Output |
| -----         |
|95|

(3)
| Sample Input | 
| -----        |
|21.0|

| Sample Output |
| -----         |
|1149.5|