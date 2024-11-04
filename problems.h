// #ifndef PROBLEMS_H
// #define PROBLEMS_H
//
//
// using namespace std;
// // Problem 1
// //floorFunction
// int floorFunction(double num, int current) {
//
//     if (current > num) {
//         return current - 1;
//     }
//
//     return floorFunction(num, current + 1);
// }
//
//
// //ceilingFunction
// int ceilingFunction(double num, int current) {
//
//     if (current >= num) {
//         return current;
//     }
//
//     return ceilingFunction(num, current + 1);
// }
//
//
// // Problem 2
// //swap_values
// void swap_values(int &a, int &b) {
//
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }
//
//
// // Problem 3
// //multiply
// int multiply(int x, int y) {
//
//     if (y == 0) {
//         return 0;
//     }
//
//
//     if (y > 0) {
//         return x + multiply(x, y - 1);
//     }
//
//
//     return -multiply(x, -y);
// }
// // Problem 4
// //digitSum
// int digitSum(int n) {
//
//     if (n == 0) {
//         return 0;
//     }
//
//     return (n % 10) + digitSum(n / 10);
// }
//
// // Problem 5
// //decimalToBinary
// void decimalToBinary(int n) {
//
//     if (n == 0) {
//         return;
//     }
//
//
//     decimalToBinary(n / 2);
//     return n % 2;
// }
//
//
// // Problem 6
// //midValue
//
// int midValue(int a, int b, int c) {
//
//     if (a == b || a == c || b == c) {
//         return (a == b) ? a : (a == c) ? a : b;
//     }
//
//
//     if ((a > b && a < c) || (a < b && a > c)) {
//         return a;
//     } else if ((b > a && b < c) || (b < a && b > c)) {
//         return b;
//     } else {
//         return c;
//     }
// }
//
//
//
// #endif

#ifndef PROBLEMS_H
#define PROBLEMS_H

using namespace std;

// Problem 1: Floor and Ceiling Functions
// floorFunction
int floorFunction(double num, int current) {
    if (current > num) {
        return current - 1;
    }
    return floorFunction(num, current + 1);
}

// ceilingFunction
int ceilingFunction(double num, int current) {
    if (current >= num) {
        return current;
    }
    return ceilingFunction(num, current + 1);
}

// Problem 2: Swap Values Function
void swap_values(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

// Problem 3: Multiply Function
int multiply(int x, int y) {
    if (y == 0) {
        return 0;
    }
    if (y > 0) {
        return x + multiply(x, y - 1);
    }
    return -multiply(x, -y);
}

// Problem 4: Sum of Digits Function
int digitSum(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + digitSum(n / 10);
}

// Problem 5: Decimal to Binary Function
// Now it returns a string representing the binary value
string decimalToBinary(int n) {
    if (n == 0) {
        return ""; // Return an empty string for 0
    }
    return decimalToBinary(n / 2) + to_string(n % 2); // Concatenate the binary digits
}

// Problem 6: Middle Value Function
int midValue(int a, int b, int c) {
    if (a == b || a == c || b == c) {
        return (a == b) ? a : (a == c) ? a : b;
    }
    if ((a > b && a < c) || (a < b && a > c)) {
        return a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        return b;
    } else {
        return c;
    }
}

#endif // PROBLEMS_H
