# 11-1 PCB Spec Checker
Read the given csv file, check whether the PCB design satisfies two given specifications, and print the results.
- Specification 1: The average IC Power must be no more than 3 W.
- Specification 2: The total IC area should be no greater than half of the PCB area.
## Input csv file
- The first line: three integers, representing the PCB's width, PCB'S height, and number of ICs on the PCB.
```text
PCB_width, PCB_length, IC_num
```
- For N ICs, the next N lines each describe one IC'S information.
```text
IC_power (double), IC_area (integer)
```
## Output
- Print two lines:
```text
Average IC Power = aa.aa,  SPEC1 PASS/FAIL 
Total IC Area = xxx, SPEC2 PASS/FAIL 
```
## Note
- PCB_area = PCB_width * PCB_length 
- input size ≤ 100 ICs
## Sample
(1) 
| Sample Input (given csv file) | 
| -----                         |
```text
200,100,4 
2.5,2000
3.5,1500 
2.0,3000 
4.0,3500
```

| Sample Output                       |
| -----                               |
```text
Average IC Power = 3.00, SPEC1 PASS 
Total IC Area = 10000, SPEC2 PASS
```
(2)
| Sample Input (given csv file) | 
| -----                         |
```text
300 , 300 , 8 
4.0 , 5000 
3.5, 5000 
2.0 ,5000 
3.0, 5000 
3.5 , 5000 
4.0, 5000 
2.5, 5000 
2.5 , 5000 
```

| Sample Output                       |
| -----                               |
```text
Average IC Power = 3.12, SPEC1 FAIL 
Total IC Area = 40000, SPEC2 PASS
```

# 11-2 Json Translator
Read three lines of user information from standard input — **Name**, **Age**, and **Gender**, and output to a simple JSON-like format, named sample.json. Note that the age should be printed as a hexadecimal base.
## Input Format
- Three lines
```text
<Name> 
<Age>
<Gender> 
```
## Output Format
```text
{ 
    "name": "<Name>", 
    "age": <Age>, 
    "gender": "<Gender>"
} 
```
## Sample
(1)
| Sample Input  |
| -----         |
```text
Tralalero Tralala 
999 
male
```

| Sample Output |
| -----         |
```text
{ 
    "name": "Tralalero Tralala", 
    "age": 0x3e7, 
    "gender": "male" 
} 
```
(2)
| Sample Input  |
| -----         |
```text
Ballerina Cappuccino 
10 
female 
```

| Sample Output |
| -----         |
```text
{ 
    "name": "Ballerina Cappuccino", 
    "age": 0xa, 
    "gender": "female" 
} 
```
