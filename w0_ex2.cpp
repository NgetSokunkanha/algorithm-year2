
#include <iostream>
#include <array>
using namespace std;

void deleteElement (int n, array<int,5>numbers) {
    if ( n<5 && n>=0) {
        for ( int i = n ; i<4; i++) {
            numbers[i] = numbers[i+1];
        }
        cout << "Result: ";
        for ( int i = 0; i <4;i++) {
            cout << numbers[i] << ' ';
        }
    } else {
        cout << "There is no " << n << " element.Please enter again!";
    }

}

int main () {
    array<int, 5> numbers = {5,4,3,2,1};
    int n;
    cout << "Enter the element you want to delete: ";
    cin >> n;
    deleteElement(n,numbers);
    return 0;
}