// VL Variables, Data Types, Inputs and Outputs

#include <iostream>
using namespace std;

int main(){
    int students = 11;
    double days = 5;
    long years = 25'54l;
    int change = years;
    const float pi = 3.14f; //float will compile fto double without f at the end
    bool on = true;
    char name = 'V';
    cout << "Tell me your age: ";
    int age;
    cin >> age;
    double divide = students/days;
    cout << divide;
    return 0;
}