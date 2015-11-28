#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream inputFile(argv[1]);

    if(inputFile.is_open())
    {
        
    }
    else
    {
        cout << "ERROR OPENING INPUT FILE!" << endl;
    }

    return 0;
}
