#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
    cout << "input file name:\n";
    string A; getline(cin, A);
    ofstream outputFile(A + ".txt");

    if (outputFile.is_open()) {
        cout << "Enter text (type '>>>' to finish):\n";
        outputFile << "<<< Made with FFile >>>\n";
        bool B = false;
        while (B == false) {
            getline(cin, A);
            if (!(A == ">>>")) {
                outputFile << A << "\n";
            }
            else {
                B = true;
            }
        }
    }
    else {
        cout << "Error: Unable to open the file.\n";
    }
    outputFile.close();
    cout << "file editing done :)\n";
    cout << "Text has been written to the file successfully.\n";

    return 0;
}
