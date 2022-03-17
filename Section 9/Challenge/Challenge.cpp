#include <iostream>
#include <vector>

using namespace std;

int main()
{
    bool display_menu{ true };
    vector <char> legal_selections{ 'p','P','a','A','m','M','s','S','l','L','q','Q'};
    vector <double> list{};
   
    do 
    {

        char menu_selection{};
        bool legal_input{false};

        // Display Menu & Selection validation
        do
        {
            // MENU
            cout << "---------------------------------------------------------\n";
            cout << "P - Print Numbers\nA - Add a Number\nM - Display mean\nS - Display the smallest number\nL - Display the largest number\nQ - Quit" << endl;
            cout << "---------------------------------------------------------\n";
            cout << "Please enter your selection: ";
            cin >> menu_selection;

            // VALIDATION
            for (int i = 0; i < legal_selections.size(); i++)
            {
                if (legal_selections[i] == menu_selection)
                {                 
                    legal_input == true;                 
                    break;
                }
                else if (legal_selections.size() - 1 == i && legal_input == false) // We reached the end of the vector and legal input still false
                {
                    cout << "Illegal input.\n";
                }
            }
            cout << "\n";
        } while (legal_input);

        // Print numbers 
        if (menu_selection == 'p' || menu_selection == 'P')
        {
            // 0 items in the vector -- display text.
            if (list.size() == 0) 
            {
                cout << "[ ] -- the list is empty\n" << endl;
            }
            // 1 item in the vector -- display proper formatting
            else if (list.size() == 1)
            {
                cout << "[ " << list[0] << " ]\n\n";
            }
            // 2+ item in the vector -- display proper formatting
            else 
            {
                
                for (int i{0}; i < list.size(); i++)
                {
                    if (i == 0)
                    {
                        cout << "[ " << list[i] << ", ";
                    }
                    else if (i > 0 && i < list.size() - 1)
                    {
                        cout << list[i] << ", ";
                    }
                    else
                    {
                        cout << list[i] << " ]\n\n";
                    }
                }
                
            }
            

        }

        // Add a number to vector list
        if (menu_selection == 'a' || menu_selection == 'A')
        {
            double num{};
         
            cout << "Enter number: ";
            cin >> num;         
            cout << endl;
            list.push_back(num);

            cout << num << " added.\n\n";

            // Validation if anthing but a integer is entered.
            // DOESNT WORK -- prevents infinite loop but adds a 0 to the list.
            /*if (cin.fail())
            {
                cout << "ERROR --- Please enter a number\n!";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }*/
        }

        // Display mean of the numbers
        if (menu_selection == 'm' || menu_selection == 'M')
        {
            double sum{ 0 };

            if (list.size() != 0 )
            {
                for (double num : list)
                {
                    sum += num;
                }
                cout << "Mean: " << (sum / list.size()) << "\n\n";
            }
            else
            {
                cout << "Unable to calculate the mean - no data\n\n";
            }

        }

        // Display the smallest number
        if (menu_selection == 's' || menu_selection == 'S')
        {

            if (list.size() != 0)
            {
                double smallest_num{list[0]};

                for (int i = 1; i < list.size(); i++)
                {
                    if (smallest_num > list[i])
                    {
                        smallest_num = list[i];
                    }
                }

                cout << "The smallest number is: " << smallest_num << "\n\n";

            }
            else
            {
                cout << "Unable to determine the smallest number - list is empty\n\n";
            }
            
        }

        // Display the largest number
        if (menu_selection == 'l' || menu_selection == 'L')
        {
            if (list.size() != 0)
            {
                double largest_num{ list[0] };

                for (int i = 1; i < list.size(); i++)
                {
                    if (largest_num < list[i])
                    {
                        largest_num = list[i];
                    }
                }

                cout << "The largest number is: " << largest_num << "\n\n";

            }
            else
            {
                cout << "Unable to determine the largest number - list is empty\n\n";
            }
        }

        // Quit
        if (menu_selection == 'q' || menu_selection == 'Q') {
            display_menu = false;
            cout << "\n------>Goodbye!<------" << endl;
        }
    } while (display_menu);
}