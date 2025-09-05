/*************************************************************************************************\
*    Author: Zwolinski, R.																		  *
*    Class: CST 113 / 133 / 202                                                                    *
*    Project: Git Demo                                                                             *
*                                                                                                 *
*   Description:                                                                                  *
*   Creating a Demo to clone from Professor's Git to Student Git.                                 *
*                                                                                                 *
*   Input:                                                                                        *
*   None                                                                                          *
*                                                                                                 *
*   Output:                                                                                       *
*   None                                                                                          *
*                                                                                                 *
\*************************************************************************************************/

#include <iostream>
#include <iomanip> // For setw, setfill
#include <string>

using namespace std;

int main() {

    // Defining the Header Components
    const string NAME = "Rich Zwolinski";
    const string PROJECT = "GIT Demo";
    const int SCREEN_WIDTH = 100;
    const char SYMB = '-';

    // Don't include this -- this is here for guidance only
    for (int i = 1; i < 11; i++) {
        cout << setw(10) << i;
    }
    cout << endl;
    for (int i = 1; i < 101; i++) {
        cout << i % 10;
    }
    cout << endl;

    // Building the header on the output
    cout << setw(SCREEN_WIDTH) << setfill(SYMB) << "" << endl; // Top
    // In order to find the center, we add the extra space and then divide by 2 because we are right aligned
    cout << setw((SCREEN_WIDTH + NAME.length()) / 2) << setfill(' ') << NAME << endl;
    cout << setw((SCREEN_WIDTH + PROJECT.length()) / 2) << setfill(' ') << PROJECT << endl;
    cout << setw(SCREEN_WIDTH) << setfill(SYMB) << "" << endl; // Bottom
    cout << setfill(' '); // Reset the fill to ' '
    cout << endl;

    // Now, begin your output for the actual project
    }
