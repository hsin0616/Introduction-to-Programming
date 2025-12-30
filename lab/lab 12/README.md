# 12-1 Find a value using a pointer
Write a program that: 
1. Reads an integer N, followed by N integers stored in an array. 
2. Reads an integer target 
3. Implements a function
```text
int* findPtr(int* arr, int N, int target) 
```
## Note
This function should: 
● Use pointer arithmetic (like p++ or *(arr+i)) to search the array 
● Return a pointer to the element if it is found 
● Return nullptr if it is not found 
In the main program: 
● If the pointer is not nullptr, print: Found at index X 
● Otherwise print: Not found 
## Sample
(1)
| Sample Input  |
| -----         |
```text
5 
3 7 2 5 8 
5 
```

| Sample Output |
| -----         |
```text
Found at index 3
```
(2)
| Sample Input  |
| -----         |
```text
6 
6 5 4 3 2 1 
7
```

| Sample Output |
| -----         |
```text
Not found 
```

(3)
| Sample Input  |
| -----         |
```text
6 
6 5 4 3 2 1 
4
```

| Sample Output |
| -----         |
```text
Found at index 2 
```
# 12-2 Find a value using a pointer
```text
void reverseArray(int* left, int* right)
● Swap *left and *right 
● Move pointers inward (left++, right--) 
● Stop when the pointers meet or cross 
In main(), read N and an array of N integers, call this function, and print the reversed array. 
```
## Sample
(1) 
| Sample Input                  | 
| -----                         |
```text
5 
1 3 5 7 9 
```

| Sample Output |
| -----         |
```text
9 7 5 3 1
```
(2)
| Sample Input                  | 
| -----                         |
```text
6 
3 5 7 6 5 4
```

| Sample Output   |
| -----           |
```text
4 5 6 7 5 3 
```