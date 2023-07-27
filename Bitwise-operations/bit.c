/*

A. Function Description:
Complete the calculate_the_maximum function in the editor below.

calculate_the_maximum has the following parameters:

1. int n: the highest number to consider
2. int k: the result of a comparison must be lower than this number to be considered


B. Prints:
Print the maximum values for the and, or and xor comparisons, each on a separate line.

C. Input Format:
The only line contains 2 space-seperated integers, n and k.

D. Constraints:
1. 2 <= n <= 10^3
2. 2 <= k <= n

E. Sample Input:    5 4

F. Sample Output:  2 [enter] 3 [enter] 3

G. Explanation
    n = 5    k = 4;
    S = {1, 2, 3, 4, 5}

    All possible value of a and b are:

    1. a = 1, b = 2; a & b = 0; a | b = 3; a ^ b = 3;
    2. a = 1, b = 3; a & b = 1; a | b = 3; a ^ b = 2;
    3. a = 1, b = 4; a & b = 0; a | b = 5; a ^ b = 5;
    4. a = 1, b = 5; a & b = 1; a | b = 5; a ^ b = 4;
    5. a = 2, b = 3; a & b = 2; a | b = 3; a ^ b = 1;
    6. a = 2, b = 4; a & b = 0; a | b = 6; a ^ b = 6;
    7. a = 2, b = 5; a & b = 0; a | b = 7; a ^ b = 7;
    8. a = 3, b = 4; a & b = 0; a | b = 7; a ^ b = 7;
    9. a = 3, b = 5; a & b = 1; a | b = 7; a ^ b = 6;
    10. a = 4, b = 5; a & b = 4; a | b = 5; a ^ b = 1;

----> Tha maximum possible value of a & b that is
    also < (k = 4) is 2, so we print 2 first
    [enter]
----> The maximum possible value of a | b is
    also < (k = 4) is 3, so we print 3 second
    [enter]
----> The maximum possible value of a ^ b is
    also < (k = 4) is 3, so we print 3 third



*/