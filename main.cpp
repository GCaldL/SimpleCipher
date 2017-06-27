/*
CipherBasic 0.1
A bare bones cesar cipher, includes basic charater support but nothing else.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << endl;
    cout << "   CipherBasic 0.1 by GCaldL"<< endl<< endl;

    string charaters = "abcdefghijklmnopqrstuvwxyz";
    string symbols = " ";

    string phrase;
    cout << "   enter phrase to scramble: ";
    getline (cin, phrase);

    cout << "   enter intiger to shift charater by: ";
    int skips;
    cin >> skips;
    cout << endl;

    string phrase2;
    for (int x=0; x < phrase.length(); x++){
        for (int y=0; y <= charaters.length(); y++){

            /*account for spaces*/
            if (phrase[x] == symbols[0]){
                phrase2.append(" ");
                break;
            }
            /*shift charters*/
            if (phrase[x] == charaters[y]){

                int z=0;
                for (int z2=0; z2 < y+skips; z2++){
                    z++;

                    if (z>=charaters.length()){
                    z=0;
                    }

                    if (z<=-1){
                    z=charaters.length();
                    }
                }

                string str;
                str = charaters[z];
                phrase2.append(str);
                break;
            }
        }
    }

    cout << "   results: "<< phrase2 << endl << endl << "   press any key to continue";

    string fin;
    cin >> fin;
    return 0;
}
