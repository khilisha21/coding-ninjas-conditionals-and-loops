// Print the following pattern
// Pattern for N = 4
// 1
// 23
// 345
// 4567


#include<iostream>
using namespace std;


int main(){

    int N, i = 1, j = 0, k = 1;
    cin >> N;
    
    while(i <= N)
    {
        int j = i;
        k = 1;
        while(k <= i)
        {
            cout << j;
            j++;
            k++;
        }
        cout << endl;
        i++;
    }
  
}


