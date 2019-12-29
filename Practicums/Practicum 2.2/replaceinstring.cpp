#include <iostream>
#include <string>

using namespace std;

int main()

{
    cout << "Enter a  word or phrase: ";

    string originalPhrase;

    std::getline(std::cin, originalPhrase);

    // Copy the original string
    string newPhrase(originalPhrase);
    int phraseSize = originalPhrase.size();
    for(int i = 0; i < phraseSize; ++i)
    {
        // Replace each character of the string with _
        newPhrase[i] = '_';
    }

    cout << endl << "Your phrase: " << originalPhrase << endl;
    cout << endl << "Your new phrase: " << newPhrase << endl;

    cout << endl;
}