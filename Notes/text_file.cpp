// VL Text files Notes

#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std; 

struct Movie{
    int id;
    string title;
    int year;
};

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
};

int main(){
    /*
    terminal - cout, cin (User given)
    file - txt, csv, binary
    network - internet, other computers
    */
    int first = getNumber("First: \n");
    int second = getNumber("Second: \n");
    cout << "You entered " << first << " and " << second << endl;

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

    ifstream ifile;
   ifile.open("data.csv");
   string str;
   vector<Movie> movies;
   if(ifile.is_open()){
    while(!ifile.eof()){
        getline(ifile, str, ',');
        if(str.empty()) continue;
        Movie movie;
        movie.id = stoi(str);

        getline(ifile, str, ',');
        movie.title = str;

        getline(ifile, str, ',');
        movie.year = stoi(str);

        movies.push_back(movie);
    }
    ifile.close();
    for(Movie i: movies){
        cout << i.title;
    }

}

    return 0;
}