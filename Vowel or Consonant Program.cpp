#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter single character:";
    cin>>ch;
    
    if (ch =='a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'|| ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U'){       
        cout << "The single character is Vowel";
    }
    else{
        cout << "The single character is Consonant";
    }

    return 0;
}

OUTPUT:
Enter single character:b
The single character is Consonant

=== Code Execution Successful ===
