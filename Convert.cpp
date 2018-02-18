#include <iostream>
#include <string>
using namespace std;

void impToKilo();
void kiloToImp();

int main()
{
    char selectQuit('q');
    char select('i');
    cout << string(50, '\n');
    cout << "Please select either convert from Imperial to Kilograms or from " << endl;
    cout << "Kilograms to Imperial by pressing i for imperial to Kilograms " << endl;
    cout << "or k for kilograms to imperial. " << endl;
    cin >> select;

    if (select == 'i')
    {
        impToKilo();
    }
    else
    {
        kiloToImp();
    }

    cout << "Press q to quit program or press any key and then press enter, to input another value to be converted. " << endl;
    cin >> selectQuit;
    if (selectQuit == 'q')
    {
        return 0;
    }
    else
    {
        return main();
    }
}

void impToKilo()
{
    float i = 0;
    float k = 0;

    cout << "Enter a value to be converted from Imperial To Kilogramms. " << endl;
    cin >> i;

    k = i / 2.2046;
    cout << "**************************" << endl;
    cout << "The result is " << k << " Kgs" << endl;
    cout << "**************************" << endl;
}

void kiloToImp()
{
    int k = 0;
    int i = 0;
    int p = 0;
    int stones = 0;

    cout << "Enter the weight to be converted from Kilogramms to Imperial. " << endl;
    cin >> k;
    i = k * 2.2046;
    stones = i / 14;
    p = i % 14;
    cout << "************************************************************" << endl;
    cout << "The converted weight in Stones and Pounds is " << stones << " Stones " << p << " Lbs " << endl;
    cout << "Or just in Pounds is " << i << " Lbs " << endl;
    cout << "************************************************************" << endl;
    cout << endl;
}