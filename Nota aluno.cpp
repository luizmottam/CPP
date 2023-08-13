#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int num1, num2, res;
    char ch;
    
    beginning:
    
    system("cls");
    
    cout << "Enter the student's first grade: ";
    cin >> num1;
    cout << "Enter the student's second grade: ";
    cin >> num2;
    
    res = num1 + num2;
    
    if (res >= 60) {
        cout << "The student has been approved!\n";
    } else if (res >= 47) {
        cout << "The student is recovering\n";
    } else {
        cout << "The student failed\n";
    }
    
    cout << "Want to add other grade?(y/n): ";
    cin >> ch;
    
    if (ch == 'Y' or ch == 'y') {
        goto beginning;
    }
    
	return 0;
}