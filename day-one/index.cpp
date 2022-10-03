# include <iostream>
//#include <ctype>

using namespace std;

void BoluOrOdun(string sentence)
{
    for(int i=0; i < sentence.length(); i++) {
        if(!isalpha(sentence[i]) && !isdigit(sentence[i]) ) {
            cout << "Please remove all spaces or special characters" << endl;
            return;
        }
    }
    if (sentence.find(" ") != string::npos) cout << "Please remove all spaces or special characters" << endl;
    else if (sentence == "Bolu" || sentence == "Odun") cout << "Welcome back, " << sentence << endl;
    else cout << "It is nice to meet you, " << sentence << endl;
}

int main()
{
    string input;
    cout << "Please enter your sentence: ";
    getline(cin, input);

    BoluOrOdun(input);

    return 0;
}
