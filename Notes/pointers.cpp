// VL Pointers Notes

#include <iostream>

using namespace std;

int numbers[] = {4, 2, 6, 8, 14, 24, 65};
void divide(int* list, int size){
    for(int i; i < size; i++){
        list[i] = list[i]/2;
        cout << list[i] << endl;
    }
    cout << "this is my numbers list " << *list << endl;
}


int main(){
    //pointers hold addresses instead of information
    int num = 4;
    int* pnum = &num;
    int day = 5;
    int month = 9;

    const double pi = 3.141592;
    const double gpa = 3.99999;

    *pnum = 8;    
    

    // Constant pointers
    const double* ppi = &pi; //value at the location cannot be changed
    ppi = &gpa;

    int* const pday = &day; //can change value, but not location being pointed at
    *pday = 6;
    //*pday = &num;

    const int* const pmonth = &month; //locatin and value cannot change 



    cout << "The number is " << num << endl;
    cout << "The location of num is " << pnum << endl;
    divide(numbers, size(numbers));


    return 0; 
}