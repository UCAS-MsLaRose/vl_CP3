#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
/* Convert other data types to strings!
istringstream => reading a string
ostringstream => writing a string
stringstream => both!
*/

using namespace std; 

struct Movie {
    string title;
    int year; 
};

string to_string(double number, int precision){
    stringstream stream;
    stream << fixed << setprecision(precision) << number;
    return stream.str();
}
Movie parseMovie(string str){
    stringstream stream;
    stream.str(str);

    Movie movie;
    getline(stream, movie.title, ',');
    stream >> movie.year;
    return movie;
}

int main(){
    double number = 3.14;
    cout << to_string(number, 2)<< endl;

    //parsing 
    string users = "10 20";
    stringstream fix;
    fix.str(users);
    int first;
    fix >> first;

    int second;
    fix >> second;

    cout << "first: " << first << endl << "second: " << second << endl;
    
    auto movie = parseMovie("A New Hope,1977");
    cout << movie.title <<endl << movie.year << endl;
    fstream file;
    file.open("file.txt", ios::in | ios::out | ios::app);
    if(file.is_open()){
        file.close();
    }

    return 0;
}