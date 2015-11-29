#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream inputFile(argv[1]);

    if(inputFile.is_open())
    {
        string line;

        double input;
        double temp;

        int deg;
        int min;
        int sec;

        while(getline(inputFile,line))
        {
            istringstream ss(line);

            ss >> input;

            deg = int(input);

            temp = input - deg;

            min = int(temp * 60);

            temp = (temp*60)-min;

            sec = int(temp * 60);

            cout << deg << "." << setw(2) << setfill('0') << min << "\'" << setw(2) << setfill('0') << sec << "\"" << endl;
        }
    }
    else
    {
        cout << "ERROR OPENING INPUT FILE!" << endl;
    }

    return 0;
}
