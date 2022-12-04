// Given a number N, print sum of all even numbers from 1 to N.

#include<iostream>
using namespace std;


int main(){
	int N, i=1, sum=0;
    cin >> N;
    while(i<=N)
    {
        if(i%2==0)
            sum = sum + i;
        i++;
    }
    cout << sum << endl;
}
