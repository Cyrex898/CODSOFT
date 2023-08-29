#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{   string nof;
    cout << "Enter name of the text file:"<<endl;
    cin >> nof;
    ifstream file(nof);
    if (!file)
        {
            cout << "File "<< nof <<" doesn't exist!"<<endl;
            return 1;
        }
    else {
    int wc = 0;
    string word;
    while (file >> word) wc++;
    cout << "Total number of words in file: "<<wc<< endl;
    }
    return 0;
}