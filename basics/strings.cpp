#include <iostream>
using namespace std;

int replaceText(string sentence, string s1, string s2){

    cout << sentence << endl;

    int pos = sentence.find(s1);
    int places = s1.length() - 1;

    sentence.replace(pos, places, s2);
    cout << sentence << endl;

    return 0;
}

int main(){
    string sentence = "Hi, I go to school today";
    string s1 = "I go";
    string s2 = "I do not go";

    replaceText(sentence, s1, s2);

    return 0;
}