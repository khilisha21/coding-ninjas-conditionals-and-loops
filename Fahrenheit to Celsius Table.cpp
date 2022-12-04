// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.


#include<iostream>
using namespace std;


int main(){

    int S, E, W, C = 0;
    cin >> S;
    cin >> E;
    cin >> W;
    
    while(S<=E)
    {
        C = ((S-32)*5)/9;
        cout << S << " " << C << endl;
        S = S + W;
    }
  
}


