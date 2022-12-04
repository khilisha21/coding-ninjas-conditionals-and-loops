// Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
// Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.

#include<iostream>
using namespace std;

int main() {
	int N, even = 0, odd = 0, r = 0;
    cin >> N;
    
    while(N != 0)
    {
        r = N % 10;
        if(r % 2 == 0)
            even = even + r;
        else
            odd = odd + r;
        N = N / 10;
    }
	cout << even << " " << odd << endl;
}
