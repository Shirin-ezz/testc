//Name: Shirin Ezzatpourghadim
//Date: 9/26/2024

#include <iostream>

using namespace std;

int main()
{
    //create a bucket that can hold an integer
    int hours1, hours2, hours3;

    //create a bucket that can hold a decimal value
   float rate1, rate2, rate3;
    
    //create three buckets that each can hold a charachter
    char f_initial, m_initial, l_initial;

    // Ask the user a question
    cout << "What are your first, middle, and last initials?(no punctuation)";
    // Fill the initial buckets with the characters the user enters
    cin >> f_initial >> m_initial >> l_initial;
    // Print the initials
    cout << "Welcome" << f_initial << m_initial << l_initial << "!\n\n";
    // Ask the user another question
    cout << "How many hours did you work summer1?";
 
    // Fill the "hours" bucket with the number the user enters

    cin >> hours1;
    // Ask the user a final question
    cout << "How much did you get paid per hour last summer1? $";
    // Fill the "rate" bucket with the number the user enters
    cin >> rate1;

    //Calculate paycheck amount and store it in a new bucket
    float pay1 = hours1 * rate1;

    // Ask the user another question
    cout << "How many hours did you work summer2?";
 
    // Fill the "hours" bucket with the number the user enters

    cin >> hours2;
    // Ask the user a final question
    cout << "How much did you get paid per hour last summer2? $";
    // Fill the "rate" bucket with the number the user enters
    cin >> rate2;

    //Calculate paycheck amount and store it in a new bucket
    float pay2 = hours2 * rate2;

// Ask the user another question
    cout << "How many hours did you work summer3?";
 
    // Fill the "hours" bucket with the number the user enters

    cin >> hours3;
    // Ask the user a final question
    cout << "How much did you get paid per hour last summer3? $";
    // Fill the "rate" bucket with the number the user enters
    cin >> rate3;

    //Calculate paycheck amount and store it in a new bucket
    float pay3 = hours3 * rate3;

    // Calculate the total pay for three summers
    float totalpay = pay1+pay2+pay3;

    //calculate the average pay for three summers
    float averagepay = totalpay / 3.0; 

    // Update display settings
    cout.precision(2);
    cout.setf(ios::fixed | ios::showpoint);

    // Display paycheck amount to each summer
    cout << "\n\n\t\tSummer1 pay for" << f_initial << m_initial <<l_initial << ".\n\n";
    cout << "You have earned $" << pay1 << " for working " << hours1 << "hours at $" << rate1 << "per hour." << endl;
    cout << "You have earned $" << pay2 << " for working " << hours2 << "hours at $" << rate2 << "per hour." << endl;
    cout << "You have earned $" << pay3 << " for working " << hours3 << "hours at $" << rate1 << "per hour." << endl;
    cout << "Total earned for three summers: $" << totalpay << "\n";
     cout << "average per summer: $" << averagepay << "\n";


    return 0;
}
