#include <iostream>
using namespace std;
int main()
{
    // values
    int age , height , weight , bill = 0;
    // gereting message
    cout << "welcome to rolercoster"<< endl;

    // costumer information
    cout << "How old are you? " << endl ;
    cin >> age ;
    cout << "how much your height in cm? " << endl;
    cin >> height;
    cout << "how much your weight? " << endl;
    cin >> weight;

    // if blocks
    if (age > 8)
    {
        if (height > 100)
        {
            if (weight > 30 && weight < 130)
            {
                cout << "You can ride the Rolercoster " << endl;
            }
            else {
                cout << "if you want to ride this, you have thr right weight here " << endl;
            }
        }
        else
        {
            cout << "You have to grow up to ride this " << endl;
        }


    }
    else
    {
        cout << "You have to grow up to ride this " << endl;

    }
    // bill calculate
    if (age > 8 && age < 18 )
    {
        cout << "your ticket is 8 $";
        if (age > 18 && age < 25)
        {
            cout << "your ticket is 20 $";
        }
        else
        {
            cout << "your ticket is 25 $";
        }
    }
    else
    {
        cout << "your ticket is 12 $";
    }



return 0 ;


}







