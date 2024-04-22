#include <iostream>
#include <windows.h>
using namespace std;
class Stock
{
private:
    string item[5] = {"001", "101", "111", "010", "110"};
    int code;
    int total_bill = 0;

public:
    int Get_price(string code)
    {
        if (code == "001")
        {
            return 100;
        }
        else if (code == "101")
        {
            return 50;
        }
        else if (code == "111")
        {
            return 300;
        }
        else if (code == "010")
        {
            return 600;
        }
        else if (code == "110")
        {
            return 800;
        }
        else
        {
            return 0;
        }
    }
    void entry(string code)
    {
        for (int i = 0; i < 5; i++)
        {
            if (code == item[i])
            {
                total_bill = total_bill + Get_price(code);
                break;
            }
        }
    }
    void print_bill()
    {
        cout << "Total Bill: " << total_bill << " Rs. " << endl;
    }
};
int main()
{
    system("cls");
    int user;
    Stock s1;
    cout << "\tWelcome to Utility Market! " << endl;
    while (true)
    {
        cout << "\tChoose from these options to proceed: " << endl;
        cout << "\t\t1.Add Item." << endl;
        cout << "\t\t2.Print Bill." << endl;
        cout << "\t\t3.Exit." << endl;

        cin >> user;
        string code_input;
        switch (user)
        {
        case 1:
            cout << "\t To add item please enter 3 digit code..." << endl;
            cout << "\t Press 0 to return to menu" << endl;
            while (code_input != "0")
            {
                cin >> code_input;
                s1.entry(code_input);
            }
            cout << "All items Added..Now you can print bill if you want." << endl;
            break;
        case 2:
            s1.print_bill();
            break;
        case 3:
            cout << "Thankyou for shopping Come Again :)" << endl;
            return 0;

        default:
            cout << "Error: Invalid Input, Please choose from given options." << endl;
            break;
        }
    }
    Sleep(5000);
    return 0;
}