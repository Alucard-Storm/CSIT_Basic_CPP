#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int TOTAL = 3;
    const string questions[TOTAL] = {
        "1) Which type stores whole numbers? (a) int (b) string (c) double",
        "2) Which loop checks its condition before each iteration? (a) do-while (b) while (c) none",
        "3) Which operator tests equality? (a) = (b) == (c) !="
    };
    const char answers[TOTAL] = {'a', 'b', 'b'};

    int score = 0;
    for (int i = 0; i < TOTAL; i++) {
        char answer;
        cout << questions[i] << endl;
        cout << "Your answer: ";
        if (!(cin >> answer)) {
            cerr << "Invalid input." << endl;
            return 1;
        }
        if (tolower(static_cast<unsigned char>(answer)) == answers[i]) {
            score++;
        }
    }

    cout << "Score: " << score << "/" << TOTAL << endl;
    if (score == TOTAL) {
        cout << "Excellent!" << endl;
    } else if (score == TOTAL - 1) {
        cout << "Good work; review one concept." << endl;
    } else {
        cout << "Review the notes and try again." << endl;
    }
    return 0;
}
