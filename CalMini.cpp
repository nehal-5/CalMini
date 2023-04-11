#include<iostream>
using namespace std;


int x,y;


void in_data()
{
       cout << "Ready For Calculation Sir/Madam" << endl;
       cout << "Enter any two numbers of your choice:"<< endl;
       cin >> x >> y;
}

void cal_culate()
{
    char op;
    cout << "Enter an operator for operation:"<<endl;
    cout << "+ or - or * or / or %";
    cin >> op;


    switch(op)
    {
        case '+':
        cout << "Addition:" << x + y;
        break;
        case '-':
        cout << "Subtraction:" << x - y;
        break;
        case '*':
        cout << "Multiplication:"<< x * y;
        break;
        case '/':
        cout << "Division:"<< x / y;
        break;
        case '%':
        cout << "Remainder of Division:" << x % y;
        break;
        default:
        cout << "Invalid man once Check the input"<< endl;
        break;
    }
}

int main()
{
    in_data();
    cal_culate();
}
