#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;

int main() 
{

    std::string questions[] = {"1. What year was C++ created?: ",
                              "2. Who invented C++?: ",
                              "3. What is the predecessor of C++?: ",
                              "4. Is the Earth flat?"};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                               {"A. C", "B. C+", "C. C--", "D. B++"},
                               {"A. Yes", "B. No", "Sometimes", "What's Earth?"}};
    
    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0; // Make sure to add = 0 to give point to initialize

    for(int i = 0; i < size; i++)
    {
        cout << "**************************" << endl;
        cout << questions[i] << endl;

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) 
        {
            cout << options[i][j] << endl;
            
        }
        
        cout << "Enter your answer here: ";
        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]) 
        {
            cout << "CORRECT" << endl;
            score++;
        }
        else
        {
            cout << "WRONG!" << endl;
            cout << "Answer: " << answerKey[i] << endl;
        }
    }
    cout << "**************************" << endl;
    cout << "*        RESULTS         *" << endl;
    cout << "**************************" << endl;
    cout << "CORRECT GUESSES: " << score << endl;
    cout << "# of QUESTIONS: " << size << endl;
    cout << "SCORE: " << std::fixed << std::setprecision(2) << (score/(double)size)*100 << "%" << endl;

    return 0;
}  





