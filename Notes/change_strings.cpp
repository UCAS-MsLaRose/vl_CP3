// VL Changing Strings

#include <iostream>
#include <string>
using namespace std;

string name = "vienna laRose";
string sentence = "The quick brown fox jumps over the lazy dog!";

int main(){
    auto index = name.find(' ');
    string first_name = name.substr(0,index);
    string last_name = name.substr(index+1);
    first_name[0] = toupper(first_name[0]);
    //tolower()
    cout << first_name << endl << last_name<< endl;
    int length = size(sentence);
    for(int i=0; i < length; i++){
        if(isspace(sentence[i])){
            sentence[i] = '_';
        }else if(isupper(sentence[i])){
            sentence[i] = tolower(sentence[i]);
        }else{
            sentence[i] = char((int(sentence[i] ) + 4) % 26 + 97);
        }
    }
    cout << sentence << endl;

    cout << R"(This is a "Question". . . I think)";


    return 0;
}
