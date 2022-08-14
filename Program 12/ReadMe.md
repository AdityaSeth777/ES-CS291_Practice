# Menu driven program to perform addition, subtraction, multiplication and transposition on any m x n matrix.

## What is a m x n matrix ?
An MxN matrix A is a two-dimensional array of numbers, where N = 1, 2, . . . , number of columns, and M = 1, 2, . . . , number of rows.

### What are the rules for matrix addition/subtraction ?
The most important rule to add/subtract the matrices is that the dimensions of matrices should be same. Once the matrices of same order are added/subtracted, then the elements of the matrices are summed/subtracted up. The resulting matrix will be of the same order.

### What are the rules for matrix multiplication ?
The product of two matrices will be defined if the number of columns in the first matrix is equal to the number of rows in the second matrix.
If the product is defined, the resulting matrix will have the same number of rows as the first matrix and the same number of columns as the second matrix.

### What are the rules for matrix transposition ?
The transpose of a matrix is obtained by changing its rows into columns (or equivalently, its columns into rows).
1. The transpose of the sum/difference (B ± C)T is the sum/difference of transposes of the matrices B and C. i.e., BT ± CT = (B ± C)T.
2. The transpose of an invertible matrix B is also invertible, and its inverse is actually the transpose of the inverse of the original matrix B. This can be represented as: (BT)-1 = (B-1)T.
3. Transpose when applied to a matrix, has higher precedence than multiplication and addition operations i.e.,
CBT = C(BT) and
C + DT = C + (DT)

## How to Install

1. Create a ```C``` virtual environment. 
2. Clone the repo ```git clone https://github.com/AdityaSeth777/ES-CS291_Practice.git``` or download the repository.
3. Go to the cloned/downloaded directory ``` cd Program 12 ```.
4. Run ``` pip3 install gcc ```.
5. And now you can run the example scripts or create your own scripts.  

## Usage
- To run any program (without <math.h>), run ``` gcc filename.c -o name```, where filename is the name of the file you are wanting to execute; name = output executable file.
- Then type ``` ./name```, and then press Enter to execute successfully.

## FAQ
- How to stop the script? Ctrl+C (control+C for Mac) 
- For any other problems, feel free to raise an issue.

## Project ReadMe
[ES-CS291 ReadMe](https://github.com/AdityaSeth777/ES-CS291_Practice/blob/main_aditya/README.md)

Contact: [adityaseth.cse@gmail.com]
