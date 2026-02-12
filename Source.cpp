#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <ios>
using namespace std;

void G(string F);

int main() {
    bool exit = false;
    while (!exit) {
        cout << "Do you want to edit or make a txt file? (edit/make/exit): ";
        string F; getline(cin, F);

        if (F == "edit") {
            G(F);
        }
        else if (F == "make") {
            G(F);
        }
        else if (F == "exit") {
            exit = true;
            cout << "Ok bye :)";
        }
        else {
            cout << "Thats not a option man...." << endl;
        }
    }
}

void G(string F) {
    if (F == "make") {
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
                    outputFile.close();
                    cout << "file editing done :)\n";
                    cout << "Text has been written to the file successfully.\n";
                }
            }
        }
        else {
            cout << "Error: Unable to open the file.\n\n";
        }
    }
    else if (F == "edit") {
        cout << "Say the full file path:\n";
        string path; getline(cin, path);
        ofstream outputFile(path, ios::app);
        if (outputFile.is_open()) {
            cout << "Enter text (type '>>>' to finish):\n";
            outputFile << "<<< Made with FFile >>>\n";
            bool B = false;
            while (B == false) {
                string A; getline(cin, A);
                if (!(A == ">>>")) {
                    outputFile << A << "\n";
                }
                else {
                    B = true;
                    outputFile.close();
                    cout << "file editing done :)\n";
                    cout << "Text has been written to the file successfully.\n";
                }
            }
        }
        else {
            cout << "Error: Unable to open the file :(\n\n";
        }
    }
}