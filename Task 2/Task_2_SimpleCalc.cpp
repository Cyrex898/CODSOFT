#include <iostream>

using namespace std;
int main()
{
    char con;
    int num1, num2, ch, i;
    cout <<"Enter 1st Number: ";
    cin >> num1;
    cout <<"Enter 2nd Number: ";
    cin >> num2;
    do
    {
        cout<<"\nPress 1 for Addition"<<endl;
        cout<<"Press 2 for Subtraction"<<endl;
        cout<<"Press 3 for Multiplication:"<<endl;
        cout<<"Press 4 for Division"<<endl<<endl;
        cout<<"Enter your choice:"<<endl<<endl;
        cin >> ch;
        switch(ch)
        {
        case 1:
            cout << "Sum of " << num1 << " and " << num2;
            cout << " : " << num1 + num2<<endl;
            break;
        case 2:
            cout << "Subtraction of " << num1 << " and " << num2;
            cout << " : " << num1 - num2<<endl;
            break;
        case 3:
            cout << "Multiplication of " << num1 << " and " << num2;
            cout << " : " << num1 * num2<<endl;
            break;
        case 4:
            cout << "Division of " << num1 << " and " << num2;
            cout << " : " << num1 / num2<<endl;
            break;
        default:
            cout<<("wrong choice");
        }
        cout<<"Do you want to continue?(y/n):";
        cin>>con;
    } while (con == 'y');
}