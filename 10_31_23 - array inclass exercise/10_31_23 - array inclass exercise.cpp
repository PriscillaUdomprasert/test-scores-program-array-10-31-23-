#include <iostream>
#include <cmath>

using namespace std;

double calculate_total (int scores[], int score_count)
{
    double total = 0.0;

    for (int i = 0; i < score_count; i++)
    {
        total = total + scores[i];
    }

    return total; 
}

int main()
{
    const int capacity = 50;

    int scores[capacity] {0};

    cout << "The Test Scores Program" << endl;

    cout << "Enter test scores (" << capacity << " max)" << endl;
    cout << "Make sure each score is between 0 and 100" << endl;
    cout << "To end the program, enter -1" << endl;

    int score_count = 0;
    int score = 0;

    while (score != -1 && score_count < capacity)
    {
        cout << "Enter score: ";
        
        cin >> score;

        if (score > 100)
        {
            cout << "Score must be from 0 to 100. Try again" << endl;
        }
        else if (score < -1)
        {
            cout << "Score can't be negative. Try again" << endl;
        }
        else if (score > -1) //if valid
        {
            scores[score_count] = score;
            score_count++;
        }
    }

    cout << endl;

    if (score_count == 0)
    {
        cout << "No scores entered" << endl;
    }
    else
    {
        double total = calculate_total(scores, score_count);
        double average = total / score_count;
        average = round(average * 10) / 10;

        cout << "Score count: " << score_count << endl;
        cout << "Score total: " << total << endl;
        cout << "Average score: " << average << endl;
    }
}

