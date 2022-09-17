#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    int counter = 0;
    string key;
    cout << "Please enter the word for search: ";
    cin >> key;
    ifstream inputFile("04.txt");
    string buf;
    while (inputFile >> buf) {
        if (key == buf)
            ++counter;
    }
    cout << "Word " << key << " occurs " << counter << " time(s)." << endl;
return 0;
}
