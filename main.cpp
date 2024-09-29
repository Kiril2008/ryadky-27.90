/*   #include <iostream>
#include <string>
using namespace std;

int main() {
    string ip;
    int adres  = 0;

    cout << "enter ip-adress: ";
    cin >> ip;

    for (int i = 0; i< ip.length(); i++) {
        if (ip[i] == '.') {
            adres++;
        } else if (ip[i] < '0' || ip[i]> '5') {
            cout << "incorrect ip-adress\n";
            return 0;
        }
    }

    if (adres == 3) {
        cout << "corect ip-adress\n";
    } else {
        cout << "incorrect ip-adress\n";
    }
    return 0;
}
*/









/*#include <iostream>
#include <string>

using namespace std;

int main() {
    string surnames[5];
    string temp;
    cout << "enter 5 students surnames: \n";
    for (int i = 0; i < 5; i++) {
        cin >> surnames[i];
    }
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (surnames[i] < surnames[j]) {
                temp = surnames[i];
                surnames[i] = surnames[j];
                surnames[j] = temp;
            }
        }
    }
    cout << "surnames for decline: \n";
    for (int i = 0; i < 5; i++) {
        cout << surnames[i] ;
    }
    return 0;
}*/






/*#include <iostream>
#include <string>

using namespace std;

int main() {
    string space;
    cout << "enter string num: ";
    getline(cin, space);

    for (int i = 0; i < space.length(); i++) {
        if (space[i] == ' ') {
            space[i] = ' ';
        }
    }
    cout << "result: " << space << "\n";

    return 0;
}
*/


/*
#include <iostream>
#include <string>
using namespace std;
int main() {
    string text;
    int letters = 0, digits = 0, others = 0;
    cout << "enter string symb: ";
    getline(cin, text);
    for (int i = 0; i < text.length(); i++) {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            letters++;
        } else if (text[i] >= '0' && text[i] <= '9') {
            digits++;
        } else {
            others++;
        }
    }
    cout << "latter: " << letters << "\n";
    cout << "number: " << digits << "\n";
    cout << "symbol: " << others << "\n";
    return 0;
}*/





/* #include <iostream>
#include <string>
using namespace std;
int main() {
    string sentence;
    int wordCount = 0;
    cout << " enter sentence: ";
    getline(cin, sentence);
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            wordCount++;
        }
    }
    wordCount++; // це має бути останнє слово ( не закінчується пробілом )
    cout << "everything words: " << wordCount << "\n";
    return 0;
}
*/



/*#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    int n;
    cout << "enter line : ";
    getline(cin, text);
    n = text.length();
    for (int i = 0; i < n / 2; i++) {
        if (text[i] != text[n - i - 1]) {
            cout << "line dont palindrom\n";
            return 0;
        }
    }
    cout << "line is palindrome \n";
    return 0;
}
*/



#include <iostream>
using namespace std;
int main() {
    char letter;
    cout << "Enter a capital letter of the Ukrainian alphabet: ";
    cin >> letter;
    if (letter == 'Я') {
        cout << "Then there are no letters\n";
    } else if (letter >= 'А' && letter < 'Я') {
        cout << "next letter: " << char(letter + 1) << "\n";
    } else {
        cout << "invalid input\n";
    }
    return 0;
}







