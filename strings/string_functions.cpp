#include <iostream>

using namespace std;

int main(){

    string phrase = "Software Development";

    cout << phrase.length()<<endl;

    cout << phrase[0]<<endl;

    phrase[0] = 'B';

    cout << phrase << endl;

    cout << phrase.find("Development",0) <<endl;

    cout << phrase.substr(9, 10);

    return 0;
}