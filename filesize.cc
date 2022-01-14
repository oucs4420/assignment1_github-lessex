/*******************************************************************
 *
 *  Author:      Logan Essex
 *  Email:       le160516@ohio.edu
 *
 *  Class: CS4420
 *
 *  Description: Counts number of lines from file(s)
 *
 *  Date:        1/14/2022
 *
 *******************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
// BSH:Saru> ./filesize input.3lines input.1line
// program: ./filesize
// input.3lines: 3
// input.1line: 1

int main(int argc, char *argv[])
{
    string line;
    ifstream myfile;

    cout << "program: " << argv[0] << endl; // prints out filename

    for (int arg = 1; arg < argc; ++arg) // looping through files
    {
        int numLines = 0; // stores number of lines per file

        myfile.open(argv[arg]);       // opens the file
        while (getline(myfile, line)) // count lines from file
        {
            numLines++; // increment every time a line is found within file
        }
        if (!myfile.is_open()) // if file fails to open, return -1
        {
            cout << " " << argv[arg] << ": "
                 << "-1" << endl;
        }
        else
        {
            cout << " " << argv[arg] << ": " << numLines << endl; // if file opens, output filename and number of lines
        }
        myfile.close();
    }
}
