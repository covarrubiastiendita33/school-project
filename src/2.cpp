#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Declare variables
    int age = 0;
    string name;
    vector<string> favorites;

    // Get user input
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "What are your favorite hobbies?" << endl;
    for (string hobby; cin >> hobby && !hobby.empty();) {
        favorites.push_back(hobby);
    }

    // Print user information
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    for (const string& hobby : favorites) {
        cout << "Hobby: " << hobby << endl;
    }

    return 0;
}
