#include <iostream>
#include <fstream>
using namespace std;

int replaceText(string sentence, string s1, string s2){

    cout << sentence << endl;

    int start = sentence.find(s1);
    int length = s1.length();

    sentence.replace(start, length, s2);
    cout << sentence << endl;

    ofstream out("output.txt");

    out << sentence << endl;

    return 0;
}

int main(){
    string sentence = "Hi, I go to school today";
    string s1 = "I go";
    string s2 = "I do not go";

    replaceText(sentence, s1, s2);

    return 0;
}