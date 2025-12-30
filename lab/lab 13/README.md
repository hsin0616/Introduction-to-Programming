# 13-1 Matrix addition
Write a program that: 
1. Reads two integers m and n (both > 0), representing the dimensions of a matrix. 
2. Dynamically allocates two m × n integer matrices using a double pointer (int**) 
3. Reads the elements of Matrix A and Matrix B from the user. 
4. Computes their element-wise sum and stores the result in a new dynamically allocated matrix Matrix C. 
5. Prints the resulting matrix C in m rows and n columns. 
6. Correctly frees all dynamically allocated memory using delete[] in the proper order. 

Complete the functions:
```text
int** CreateMatrix(int m, int n);  
void DeleteMatrix(int** mat, int m); 
```
- CreatMatrix should dynamicaally allocate an m*n matrix and return the pointr to the matrix.
- DeleteMtrix should correctly free all rows and free the top-level pointer array.
## Sample
(1)
| Sample Input  |
| -----         |
```text
2 3 
1 2 3 
4 5 6 
6 5 4 
3 2 1 
```

| Sample Output |
| -----         |
```text
7 7 7 
7 7 7 
```
(2)
| Sample Input  |
| -----         |
```text
3 2 
1 0
-1 2 
4 5 
3 1 
2 2 
1 1
```

| Sample Output |
| -----         |
```text
4 1 
1 4 
5 6
```
# 13-2 Smartest student
Write a function to find the student who gets the highest score.
1. Defines a struct for storing student information:
```text
struct Student{ 
    char name[20]; 
    int score; 
};
```
2. Reads an integer ```text N (number of students, 0 < N ≤ 50)```.
3. Dynamically allocates an array of Student:```text Student* list = new Student[N];```
4. Reads N students’ data from input. Each student has a name (no spaces) and an integer score.
5. Implements a function: ```text Student* findTopStudent(Student* list, int N);```

The function should:
- Go through the array using either array indexing (list[i]) or pointer arithmetic 
((list + i)->score) 
- Find the student with the highest score 
- If multiple students have the same highest score, return the first one appearing 
in the list 
- Return a pointer to that Student 
- If N is 0 (no students), return nullptr 

In main(): 
- Call findTopStudent(list, N) 
- If the returned pointer is not nullptr, print the student’s name who gets the highest score 
- Correctly free the dynamically allocated memory
## Sample
(1) 
| Sample Input (given csv file) | 
| -----                         |
```text
3 
Alice 75 
Bob 92 
Carol 88 
```

| Sample Output |
| -----         |
```text
Top student: Bob 
```
(2)
| Sample Input | 
| -----        |
```text
5 
Tom 60 
Jerry 60 
Maya 100 
Ken 90 
Lily 85
```

| Sample Output |
| -----         |
```text
Top student: Maya
```