// VL Structure Notes

#include <iostream>
#include <string> 
#include <vector>

using namespace std; 

struct Date{
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie {
    string title;
    Date releaseDate;
    bool isPopular = true; 


    
};

bool operator==(const Movie& first, const Movie& second){
            return (first.title == second.title &&
                first.releaseDate.year == second.releaseDate.year &&
                first.releaseDate.month == second.releaseDate.month &&
                first.releaseDate.day == second.releaseDate.day &&
                first.isPopular == second.isPopular
            );
}

ostream& operator<<(ostream& stream, Movie& movie){
    stream << movie.title;
    return stream;
}

//ostream& operator<<(ostream& stream, Customer& customer){
//    stream << customer.name;
//    return stream;
//}

void showMovie(Movie* movie){
    cout << movie -> title << endl;
}

// customer structor with id, name, email


int main(){
    vector<Movie> movies;

    //Movie movie = {"Terminator", 1984};
    movies.push_back({"Terminator", {1984, 6, 1}});
    movies.push_back({"Terminator 2", 1987});

    Movie movie1 = {"Terminator", {1984, 6, 1}};
    Movie movie2 = {"Terminator 2", 1987};
    showMovie(&movie1);

    //auto [title, releaseYear, isPopular] {movie};

    for (auto movie: movies){
        auto [title, releaseDate, isPopular] {movie};
        cout << "Movie Title: " << title << endl;
        cout << "Movie Year: " << releaseDate.year << endl;
        cout << "Movie Popular: " << isPopular << endl;
    }
    if(movie1 == movie2)
        cout << movie1 << " is Equal" << endl;
    else{
        cout << movie1 << " is not " << movie2 << endl;
    }


    return 0;
}