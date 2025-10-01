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
        << "1,Terminator 1,1984\n"
        << "2,Terminator 2,1991\n";
        file.close();
   }

    ifstream ifile;
   ifile.open("data.csv");
   string line;
   vector<Movie> movies;
   if(ifile.is_open()){
    getline(ifile,line);
    while(getline(ifile,line)){ //My notes didn't include the title line, that is what is causing the stoi error. Tal abut how to skip over the first line
        istringstream iss(line);
        string item;

        Movie movie;
        getline(iss, item, ',');
        movie.id = stoi(item);
        getline(iss, item, ',');
        movie.title = item;
        getline(iss, item, ',');
        movie.year = stoi(item);

        movies.push_back(movie);

    }
    ifile.close();
    for(Movie i: movies){
        cout << i.title << endl;
    }

}

    return 0;
}