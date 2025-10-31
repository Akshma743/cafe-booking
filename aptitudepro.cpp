#include <iostream>
#include <string>
using namespace std;

// Function to ask each question
int askQuestion(string question, string a, string b, string c, string d, char correctAns) {
    char userAns;
    cout << "\n" << question << endl;
    cout << "A. " << a << endl;
    cout << "B. " << b << endl;
    cout << "C. " << c << endl;
    cout << "D. " << d << endl;
    cout << "\nEnter your answer (A/B/C/D): ";
    cin >> userAns;
    userAns = toupper(userAns); // convert to uppercase

    if (userAns == correctAns) {
        cout << "✅ Correct Answer!\n";
        return 1;
    } else {
        cout << "❌ Wrong Answer! Correct answer was: " << correctAns << endl;
        return 0;
    }
}

int main() {
    cout << "========================================\n";
    cout << "           WELCOME TO QUIZ GAME          \n";
    cout << "========================================\n";

    string name;
    cout << "\nEnter your name: ";
    getline(cin, name);

    cout << "\nHello " << name << "! Let's begin your quiz.\n";
    cout << "You will get 1 point for each correct answer.\n";
    cout << "----------------------------------------\n";

    int score = 0;

    // ---------- 10 Questions ----------
    score += askQuestion("Q1. What is the capital of India?",
                         "Mumbai", "New Delhi", "Kolkata", "Bangalore", 'B');

    score += askQuestion("Q2. Who developed the C++ programming language?",
                         "James Gosling", "Bjarne Stroustrup", "Dennis Ritchie", "Guido van Rossum", 'B');

    score += askQuestion("Q3. Which of the following is a mammal?",
                         "Crocodile", "Whale", "Eagle", "Shark", 'B');

    score += askQuestion("Q4. What is the full form of CPU?",
                         "Central Processing Unit", "Central Programming Unit", "Control Process Unit", "Computer Processing Unit", 'A');

    score += askQuestion("Q5. Which of these is not an operating system?",
                         "Windows", "Linux", "Python", "MacOS", 'C');

    score += askQuestion("Q6. Which keyword is used to create a class in C++?",
                         "class", "struct", "object", "define", 'A');

    score += askQuestion("Q7. What is the extension of a C++ source file?",
                         ".java", ".txt", ".cpp", ".py", 'C');

    score += askQuestion("Q8. Who is known as the father of computer?",
                         "Charles Babbage", "Alan Turing", "John von Neumann", "Steve Jobs", 'A');

    score += askQuestion("Q9. Which symbol is used to comment a single line in C++?",
                         "//", "/*", "#", "--", 'A');

    score += askQuestion("Q10. Which company developed the Windows Operating System?",
                         "Google", "Microsoft", "Apple", "IBM", 'B');

    cout << "\n----------------------------------------\n";
    cout << "🎉 Quiz Over, " << name << "! 🎉\n";
    cout << "Your total score is: " << score << "/10\n";

    // Result message
    if (score == 10)
        cout << "🏆 Excellent! You’re a genius!\n";
    else if (score >= 7)
        cout << "👏 Great work! You did very well.\n";
    else if (score >= 4)
        cout << "🙂 Good attempt! Keep learning.\n";
    else
        cout << "😅 You need more practice. Try again!\n";

    cout << "----------------------------------------\n";
    cout << "Thanks for playing the Quiz Game!\n";
    cout << "========================================\n";

    return 0;
}
