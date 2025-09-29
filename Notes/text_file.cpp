// VL Text files Notes

#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>

using namespace std; 

int getNumber(const string& prompt){
    int num;
    while(true){
        cout << prompt;
        cin >> num;
        if(cin.fail()){
            cout << "Enter a valid number!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears the buffer
        }else break;
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return num;
}

int main(){
    /*
    terminal - cout, cin (User given)
    file - txt, csv, binary
    network - internet, other computers
    */
    int first = getNumber("First: \n");
    int second = getNumber("Second: \n");
    cout << "You entered " << first << " and " << second;

    /*
    ifstream > input files stream 
    ofstream < output file stream
    fstream <> combines the functionality 
    */
   ofstream file;
   file.open("data.txt");
   if(file.is_open()){
    file << setw(20) <<"Hello " << setw(20) << "World";
    file.close();
   }
    file.open("data.csv");
    if(file.is_open()){
        file << "id, title, year\n"
        << "1, Terminator 1, 1984\n"
        << "2, Terminator 1, 1991\n";
        file.close();
   }


    return 0;
}