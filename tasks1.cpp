                                                   // CGPA  CALCULATOR
#include <iostream>
using namespace std;

int main() {
    // Variables to store credit hours and grade points for each subject
    float creditHours[] = {3, 4, 3, 2}; // Credit hours for the subjects
    float gradePoints[] = {8.5, 9.0, 9.2, 7.8}; // Grade points for the subjects
    
    // Variables to hold total grade points and total credit hours
    float totalGradePoints = 0, totalCredits = 0, cgpa;
    
    int numSubjects = sizeof(creditHours) / sizeof(creditHours[0]); // Number of subjects

    // Loop through each subject to calculate total grade points and total credits
    for (int i = 0; i < numSubjects; i++) {
        totalGradePoints += gradePoints[i] * creditHours[i]; // Add weighted grade points
        totalCredits += creditHours[i]; // Add credit hours
    }

    // CGPA calculation
    if (totalCredits != 0) {
        cgpa = totalGradePoints / totalCredits;
        cout << "Your CGPA is: " << cgpa << endl;
    } else {
        cout << "Error: Total credits cannot be zero." << endl;
    }

    return 0;
}