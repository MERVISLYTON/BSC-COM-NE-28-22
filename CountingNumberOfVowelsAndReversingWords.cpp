#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int countVowels(const string& text) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for(char c : text) {
        if(vowels.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

int countWords(const string& text) {
    int count = 0;
    size_t pos = 0;
    while((pos = text.find_first_not_of(" ", pos)) != string::npos) {
        count++;
        pos = text.find_first_of(" ", pos);
    }
    return count;
}

string reverseString(const string& text) {
    string reversedText = text;
    reverse(reversedText.begin(), reversedText.end());
    return reversedText;
}

string capitalizeSecondLetter(const string& text) {
    string result = text;
    bool capitalize = false;
    for(size_t i = 0; i < text.length(); ++i) {
        if(isalpha(text[i])) {
            if(capitalize) {
                result[i] = toupper(text[i]);
            }
            capitalize = !capitalize;
        }
    }
    return result;
}

int main() {
    string fileData;
    ifstream inFile("c++.txt");

    if(inFile.is_open()) {
        getline(inFile, fileData);
        inFile.close();

        int numVowels = countVowels(fileData);
        cout << "Number of vowels: " << numVowels << endl;

        int numWords = countWords(fileData);
        cout << "Number of words: " << numWords << endl;

        string reversedStatement = reverseString(fileData);
        cout << "Reversed statement: " << reversedStatement << endl;

        string capitalizedStatement = capitalizeSecondLetter(fileData);
        cout << "Capitalized statement: " << capitalizedStatement << endl;

    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}