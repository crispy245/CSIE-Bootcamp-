/*

Please read a whole name and save it's first and last name on
different variables

*/

#include <iostream>

using namespace std;

int main()
{

    char name[100];
    cin.getline(name, 100); // read line to array
                            // the other getline only works with strings
    // you may ignore this

    char first_name[100];
    char last_name[100];

    int name_pos = 0;
    int first_name_pos = 0;
    int last_name_pos = 0;
    while (name[name_pos] != ' ')
    {
        first_name[first_name_pos] = name[name_pos];
        first_name_pos++;
        name_pos++;
    }
    first_name[first_name_pos] = '\0';
    name_pos++;

    while (name[name_pos] != '\0')
    {
        last_name[last_name_pos] = name[name_pos];
        last_name_pos++;
        name_pos++;
    }
    last_name[last_name_pos] = '\0';

    cout << "First Name:" << first_name << endl;
    cout << "Last Name:" << last_name << endl;
}
