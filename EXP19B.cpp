#include <iostream>
using namespace std;

int push(int array[], int *top) {
    *top += 1;
    array[*top] = 10;   // fixed value
    return array[*top];
}

int pop(int array[], int *top) {
    int value = array[*top];
    *top -= 1;
    return value;
}

int main() {
    int array[5];
    int top = -1;

    // Push 5 times
    for (int i = 0; i < 5; i++) {
        push(array, &top);
    }

    cout << "Stack after pushes: ";
    for (int i = 0; i <= top; i++) {
        cout << array[i] << "\t";
    }
    cout << endl;

    while (top >= 0) {
        cout << "Popped: " << pop(array, &top) << endl;
        cout << "Stack now: ";
        for (int i = 0; i <= top; i++) {
            cout << array[i] << "\t";
        }
        if (top == -1) cout << "(empty)";
        cout << endl;
    }

    return 0;
}


/*
Sample Output : 
Stack after pushes: 10    10    10    10    10
Popped: 10
Stack now: 10    10    10    10
Popped: 10
Stack now: 10    10    10
Popped: 10
Stack now: 10    10
Popped: 10
Stack now: 10
Popped: 10
Stack now: (empty)
*/
