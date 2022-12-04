// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
// Note : For this question, you can assume that 0 raised to the power of 0 is 1

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int x, n, i=1, r=1;
    cin >> x >> n;
 
    while(n != 0)
    {
        r = r * x;
        n--;
    }
    
	cout << r << endl;
    
}
