#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++) 
    {
        int squ = i * i;
        if (squ % 10 == i)
        {  
            cout << i << endl;
        }
        else if (squ % 100 == i)
        {
            cout << i << endl;
        }
        else if (squ % 1000 == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}




