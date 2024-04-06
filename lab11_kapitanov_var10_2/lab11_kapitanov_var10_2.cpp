#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    char* ptr1 = new char;
    char* ptr2 = new char;
    char* ptr3 = new char;
    cout << "Введiть значення для першої змiнної: ";
    cin >> *ptr1;
    cout << "Введiть значення для другої змiнної: ";
    cin >> *ptr2;
    cout << "Введiть значення для третьої змiнної: ";
    cin >> *ptr3;

    cout << "\nЗначення перед обмiном:\n";
    cout << "Перша змiнна: " << *ptr1 << "\nДруга змiнна: " << *ptr2 << "\nТретя змiнна: " << *ptr3 << endl;

    char temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout << "\nЗначення пiсля обмiну:\n";
    cout << "Перша змiнна: " << *ptr1 << "\nДруга змiнна: " << *ptr2 << "\nТретя змiнна: " << *ptr3 << endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
