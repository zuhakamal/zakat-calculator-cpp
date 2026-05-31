#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, gender, feedback;
    int age, choice;

    float money, sellingPrice, expenses;
    float goldGram, silverGram, landMarla;

    float zakat;

    cout << "\n====================================";
    cout << "\n        ZAKAT CALCULATOR";
    cout << "\n====================================\n";

    cout << "\nAssalam-u-Alaikum!\n";

    cout << "\nEnter Your Name: ";
    getline(cin, name);

    cout << "Enter Gender: ";
    getline(cin, gender);

    cout << "Enter Age: ";
    cin >> age;

    cout << "\n------------------------------------\n";
    cout << "Zakat is 2.5% of the wealth of each";
    cout << "\nMuslim and is paid once a year.";
    cout << "\n------------------------------------\n";

    do
    {
        cout << "\n\n===== MENU =====";
        cout << "\n1. Money";
        cout << "\n2. Fruits";
        cout << "\n3. Gold";
        cout << "\n4. Silver";
        cout << "\n5. Land";
        cout << "\n6. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "\nEnter Total Money: ";
                cin >> money;

                zakat = money * 0.025;

                cout << "Your Zakat on Money = "
                     << zakat << endl;
                break;
            }

            case 2:
            {
                cout << "\nEnter Selling Price of Fruits: ";
                cin >> sellingPrice;

                cout << "Enter Expenses: ";
                cin >> expenses;

                zakat = (sellingPrice - expenses) * 0.025;

                cout << "Your Zakat on Fruits = "
                     << zakat << endl;
                break;
            }

            case 3:
            {
                cout << "\nEnter Gold in Grams: ";
                cin >> goldGram;

                if(goldGram < 85)
                {
                    cout << "Gold is below Nisab."
                         << "\nNo Zakat Applicable.\n";
                }
                else
                {
                    float goldValue = goldGram * 10000;

                    zakat = goldValue * 0.025;

                    cout << "Your Zakat on Gold = "
                         << zakat << endl;
                }
                break;
            }

            case 4:
            {
                cout << "\nEnter Silver in Grams: ";
                cin >> silverGram;

                if(silverGram < 612)
                {
                    cout << "Silver is below Nisab."
                         << "\nNo Zakat Applicable.\n";
                }
                else
                {
                    float silverValue = silverGram * 100;

                    zakat = silverValue * 0.025;

                    cout << "Your Zakat on Silver = "
                         << zakat << endl;
                }
                break;
            }

            case 5:
            {
                cout << "\nEnter Land (Marla): ";
                cin >> landMarla;

                float landValue = landMarla * 20000;

                zakat = landValue * 0.025;

                cout << "Your Zakat on Land = "
                     << zakat << endl;
                break;
            }

            case 6:
            {
                cout << "\nThank You!\n";
                break;
            }

            default:
            {
                cout << "\nInvalid Choice!";
            }
        }

    } while(choice != 6);

    cin.ignore();

    cout << "\nGive Your Feedback: ";
    getline(cin, feedback);

    cout << "\nAllah Hafiz, " << name << "!\n";

    return 0;
}
