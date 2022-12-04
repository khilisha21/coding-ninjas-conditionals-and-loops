#include<iostream>
using namespace std;

int main(){

    int N, i = 1;
    cin >> N;
    
    while(i <= N)
    {
        int j = i;
        int k = 1, m = 1, p = 1;
        while(m <= (N - i))
        {
            cout << " ";
            m++;
        }
        while(k <= i)
        {
        	cout << "*";
        	j++;
        	k++;
        }
        while(p <= (i - 1))
        {
            cout << "*";
            p++;
        }
        cout << endl;
        i++;
    }
  
}


