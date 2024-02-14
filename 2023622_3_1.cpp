#include <iostream>
using namespace std;

double calculateAverage(int score[], int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += score[i]; // sum of total scores
    }
    double average = sum / size; // Calculate average
    return average;
}

void determineGrade(double average)
{
    char grade;
    if (average >= 90)
    {
        grade = 'A';
    }
    else if (average >= 80)
    {
        grade = 'B';
    }
    else if (average >= 70)
    {
        grade = 'C';
    }
    else if (average >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    cout << grade;
}

int main()
{
    int students;
    int subjects = 3;
    cout << "Enter the number of Students: ";
    cin >> students;
    int score[students][subjects];

    for (int i = 0; i < students; i++)
    {
        cout << "Enter Marks of Student " << i + 1 << endl;
        for (int j = 0; j < subjects; j++)
        {
            cout << "Subject " << j + 1 << ": ";
            cin >> score[i][j];
        }
    }
    cout << "Average of Subjects" << endl;
    for (int j = 0; j < subjects; j++)
    {
        cout << "Subject " << j + 1 << " Average is: " << calculateAverage(score[j], students);
        cout << endl;
    }

    for (int i = 0; i < students; i++)
    {
        double average = calculateAverage(score[i], subjects);
        cout << "Grade of Student " << i + 1 << " is: ";
        determineGrade(average);
        cout << endl;
    }
}
