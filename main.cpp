#include <iostream>
using namespace std;

int charFind(const char text[], char letter) {

    int i = 0;
    while (text[i] != '\0') {   
        if (text[i] == letter) {
            return i;  
        }
        i++;
    }

    return -1;  

}

int substringFind(const char text[], const char word[]) {

    for (int i = 0; text[i] != '\0'; i++) {
        int j = 0;

        while (word[j] != '\0' && text[i + j] == word[j]) {
            j++;
        }
        
        if (word[j] == '\0') {
            return i;
        }
    }

    return -1;
    
}

int main() {

    const char sentence[] = "The quick brown fox";

    cout << "Find Character 'e': " << charFind(sentence, 'e') << "\n";
    cout << "Find Substring \"quick\": " << substringFind(sentence, "quick") << "\n";
    cout << "Find Character ' ': " << charFind(sentence, ' ') << "\n";
    cout << "Find Character 'z': " << charFind(sentence, 'z') << "\n";    
    cout << "Find Substring \"quiet\": " << substringFind(sentence, "quiet") << "\n";
    cout << "Find Substring \"fox\": " << substringFind(sentence, "fox") << "\n";

    return 0;
}