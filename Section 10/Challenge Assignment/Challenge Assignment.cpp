#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printPyramid(vector<vector<char>> pyramid)
{
    for (size_t i = 0; i < pyramid.size(); i++)
    {
        for (size_t j = 0; j < pyramid[i].size(); j++)
        {
            cout << pyramid[i][j];
        }

        cout << endl;
    }
}


int main()
{
    // User input
    string text{};
    cout << "Enter a text: ";
    cin >> text;
    cout << endl;
    
    // Blank Vector
    vector <vector<char>> pyramid{};
    size_t numberOfRows = text.length();
    size_t numberOfColumns = (numberOfRows * 2)-1;
    int midpoint = numberOfColumns % numberOfRows;

    // Blank Grid creation 
    for (size_t i = 0; i < numberOfRows; i++)
    {
        vector <char> row{};

        for (size_t j = 0; j < numberOfColumns; j++)
        {
            row.push_back(' '); // substitute a letter for visual clarity
        }

        pyramid.push_back(row);
    }

    // Insert Elements into midpoint positions
    int count{ 0 }; 

    for (size_t i = 0; i < pyramid.size(); i++)
    {
        // Adds elements to appropriate midpoints in each row.
        pyramid[i][midpoint] = text[count];
        count++;
    }

    // Left side of midpoint loop -- inserts appropriate elements left of the midpoint
    for (size_t i = 0; i < pyramid.size(); i++)
    {
        int count{1};
        int num_char_in_row{0};

        // Starts one index to the left of midpoint 
        for (size_t j = midpoint; j --> 0;)
        {
            // Stop condition: Stops the loop if we're in the first row or if there are no more characters to insert in the direction we're heading. The iterator "i" also represents how many characters should be inserted to the left and right of the midpoint. If num_char_in_row is greater than or equal to 'i', we've inserted enough characters.
            if (i == 0 || (num_char_in_row >= i))
            {
                break;
            }

            // Locates the appropriate character from "text."
            pyramid[i][j] = text[i - count];
            
            count++;
            num_char_in_row++;
        }
    }


    // Right side of midpoint loop -- inserts appropriate elements right of the midpoint
    for (size_t i = 0; i < pyramid.size(); i++)
    {        
        int count{ 1 };
        int num_char_in_row{ 0 };

        for (size_t j = (midpoint + 1); i < (numberOfColumns - 1); j++)
        {
            // Stop condition: Stops the loop if we're in the first row or if there are no more characters to insert in the direction we're heading. The iterator "i" also represents how many characters should be inserted to the left and right of the midpoint. If num_char_in_row is greater than or equal to 'i', we've inserted enough characters.
            if (i == 0 || (num_char_in_row >= i))
            {
                break;
            }

            // Locates the appropriate character from "text."
            pyramid[i][j] = text[i - count];
            
            count++; 
            num_char_in_row++;

        }
    }

    printPyramid(pyramid);
 
    cout << endl;
    return 0;
}