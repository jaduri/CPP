#include <iostream>
using namespace std;

int main(){

    string sentence = "Hi, I go to school today";
    string s1 = "I go";
    string s2 = "I do not go";

    cout << sentence << endl;

    int pos = sentence.find(s1);
    int places = s1.length() - 1;

    sentence.replace(pos, places, s2);

    cout << sentence << endl;

    return 0;
}