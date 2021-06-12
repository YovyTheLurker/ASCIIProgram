#include <iostream>
#include <string.h>
#include <sstream>
#include <istream>
using namespace std;
constexpr auto MAX_SENTENCE_LENGTH = 125;

int main()
{//This part will convert alpha values into their ASCII counterpart
    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);
//This part will convert ASCII values into alpha
    int n1, n2, n3, n4, n5;
    cout << "\nEnter 5 integers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << "Alpha message: " << char(n1) << char(n2) << char(n3) << char(n4) << char(n5);

    
   
}
