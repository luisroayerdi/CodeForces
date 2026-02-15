#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

5
abcdefgh
abcdefghi
abcdefghij
abcdefghijk
abcdefghijklm
*/

void tooLong(string word);

int main(){

    int n;
    cin >> n;

    vector<string> vec(n);

    for (int i = 0; i<n; i++){
        cin >> vec[i];
    }

    for (int j = 0; j<n; j++) {
        tooLong(vec[j]);
    }
}

void tooLong(string word){
    if (word.size() <= 10)
    {
        cout << word << '\n';
    }
    else 
    {
        int count = 0;
        for (int i = 0; i < word.size()-2; i++){
            count++;
        }

        cout << word[0] << count << word[count+1] << "\n";
    }
}
