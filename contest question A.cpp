#include <iostream>
#include <fstream>

using namespace std;

int dd() {

    int numP=0;
    int numQ = 0;
    int time = 210;
    int  timeP = 0;
    char answer = ' ';

//  cout << " numP and numQ : ";
    cin >> numP;
    cin >> numQ;
    
    while (time > 0) {



    //  cout << " person time : ";
        cin >> timeP;
//      cout << " answer: ";
        cin >> answer;

        time = time - timeP;
        if (time > 0) {
            if (answer == 'T') {

                numQ--;
                if (numP < 8) {
                    numP++;
                }
                else if (numP == 8) {
                    numP = 1;
                }
            }
            else if (answer == 'N') {

                numQ--;

            }
            else if (answer == 'P') {

                numQ--;

            }
        }
        
        
        ;
        if (numQ <= 0 || time < 0) { break; }
    }

    return numP;
}
int main() {

    
    

    int result =dd();


    cout << result << endl;

    
//  system("pause");
    return 0;
}
