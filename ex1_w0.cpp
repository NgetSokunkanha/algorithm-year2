
#include <iostream>
#include <array>
using namespace std;

void insertElement(int n , array<int , 5 > numbers ) {
    if ( n<5 && n>=0 ) {
        int valueNumber;
        cout << "Enter the value: ";
        cin >> valueNumber;
        for ( int i = 5 ; i> n; i--) {
            numbers[i] = numbers[i-1];
        }
        numbers[n] = valueNumber;
        cout << "Result: ";
        for ( int i = 0; i <=5;i++) {
            cout << numbers[i] << ' ';
        }
    } else {
        cout << "There is no " << n << " element.Please enter again!";
    }
}

int main () {
    array<int, 5> numbers = {5,4,3,2,1};
    int n;
    cout << "Enter the element you want to insert: ";
    cin >> n;
    insertElement(n,numbers);
    return 0;
}

