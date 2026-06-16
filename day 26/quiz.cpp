#include <iostream>
#include<cctype>
using namespace std;

int score = 0;

void askQuestion(string question, string option1, string option2,
                 string option3, string option4, char answer) {
    char userAnswer;

    cout << "\n" << question << endl;
    cout << "A. " << option1 << endl;
    cout << "B. " << option2 << endl;
    cout << "C. " << option3 << endl;
    cout << "D. " << option4 << endl;

    cout << "Enter your answer (A/B/C/D): ";
    cin >> userAnswer;

    userAnswer = toupper(userAnswer);

    if (userAnswer == answer) {
        cout << "Correct Answer!\n";
        score++;
    } else {
        cout << "Wrong Answer!\n";
    }
}

int main() {
    cout << "===== QUIZ APPLICATION =====\n";

    askQuestion(
        "1. Who is the first trillionre of teh world?",
        "mukesh ambani", "elon musk", "jethalal", "jeff bezos",
        'B'
    );

    askQuestion(
        "2. which company is often termed with 'desh ka loha'?",
        "Jindal steel", "SAIL", "Tata", "JSW",
        'C'
    );

    askQuestion(
        "3. How many continents are there?",
        "5", "6", "7", "8",
        'C'
    );

    askQuestion(
        "4. who was the mediator in USA/Iran ceasefire?",
        "India", "Pakistan", "Afghanistan", "Russia",
        'B'
    );

    askQuestion(
        "5. which college in knowledge park is also known as'IIT NOIDA'?",
        "NIET", "GCET", "GL BAJAJ", "ITS",
        'C'
    );

    cout << "\n===== RESULT =====\n";
    cout << "Your Score: " << score << "/5\n";

    if (score == 5)
        cout << "Excellent!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}