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
    // myfile.open(argv[1]);
    cout << "program: " << argv[0] << endl;

    // just to get you started, this is how to refer to the arguments that were passed
    for (int arg = 1; arg < argc; ++arg)
    {
        int numLines = 0;

        myfile.open(argv[arg]);
        while (getline(myfile, line))
        {
            numLines++;
        }

        cout << argv[arg] << " " << numLines << endl;
        myfile.close();
    }

    exit(0); // this means that the program executed correctly!
}
