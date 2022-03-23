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
    // take a string from the user
    string text{"ABC"};
    //cout << "Enter a text: ";
    //cin >> text;
    
    vector <vector<char>> pyramid{ 
        {' ',' ','A',' ',' '},
        {' ','A','B','A',' '},
        {'A','B','C','B','A'}
    };

    size_t numberOfRows = text.length();
    size_t numberOfColumns = numberOfRows + 2;
    int midpoint = numberOfColumns % numberOfRows;

    // Blank grid creation 
    //for (size_t i = 0; i < numberOfRows; i++)
    //{
    //    // Row creation - define row vector, pushback elements into row, pushback entire new row into pyramid
    //    vector <char> row{};

    //    for (size_t j = 0; j < numberOfColumns; j++)
    //    {
    //        row.push_back(' '); // substitute a letter for visual clarity
    //    }

    //    pyramid.push_back(row);
    //}
    
    // midpoint in the first vector will always be the first letter in the text
    pyramid[0][midpoint] = text[0];

    // Insert elements into grid
    for (size_t i = 0; i < pyramid.size(); i++) // looping from row to row
    {
        
        // looping from column to column within a particular row (iterate through each element in a row)
        // need to start from the rows midpoint, go left , go right , insert elements


        // LOOP LEFT // l == 2
        for (size_t l = midpoint-1; l > 0 ; l--)
        {
            cout << pyramid[i][l] << " ";
        }

        cout << "MIDPOINT" << " ";

        // LOOP RIGHT
        for (size_t r = midpoint+1; r < numberOfColumns; r++)
        {
            cout << pyramid[i][r] << " ";
        }
    }

    //printPyramid(pyramid);
 
    return 0;
}

/////// GRID //////////
// create X number of vectors based on the length of text -- 2d vector
// calculate number of rows = length of text
// calculate number of columns = 2*(rows - 1)

// How do we input chars into the grid?
// first row - find the center. mid point of first row is #of colums 

/*
             012
User Input - ABC
3 rows x 5 column

   01234
0 [  A  ] 3rd element - 2nd index = midpoint ------- #columns % #rows == index of midpoint ----- 5%3 = 2
1 [ ABA ]
2 [ABCBA]

4 rows x 7 columns
User Input - 1234
[   1   ] 4th element - 3rd index = midpoint ------ #columns % #rows == index of midpoint ----- 7%4 = 3
[  121  ]
[ 12321 ]
[1234321]

User Input - 12345
5 rows x 9 column
[    1    ]
[   121   ]
[  12321  ]
[ 1234321 ]
[123454321]
*/