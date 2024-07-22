#include <iostream>

using namespace std;

int main()
{
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";
    unsigned int start = 0;
    while (start <= 255)
    {
        cout << start << "\t" << char(start) << endl;
        start++;
    }
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";
    unsigned int number_2;
    cout << "\tEnter number :";
    cin >> number_2;
    int zero = 0;
    while (zero < number_2)
    {
        cout << "*";
        zero++;
    }
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n\n\n";

    unsigned int number_3 = 2;

    while (number_3 <= 50)
    {
        cout << number_3 << ",";
        number_3 += 2;
    }
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";
    int number_4;
    int number_4_;
    int num = 0;
    int num_ = 1;
    cout << "\tEnter first number :";
    cin >> number_4;
    cout << "\tEnter secound number :";
    cin >> number_4_;

    while (number_4 <= number_4_)
    {
        if (number_4 % 2 == 0)
        {
            num += number_4;
        }
        else
        {
            num_ *= number_4_;
        }
        number_4++;
    }
    cout << "\n\tCouple number :" << number_4;
    cout << "\t\tSingle number :" << number_4_;
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 5";
    cout << "\n\n\n\n";

    unsigned int number_5 = 3;

    while (number_5 <= 100)
    {
        cout << number_5 << ",";
        number_5 += 3;
    }
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 6";
    cout << "\n\n\n\n";
    int factorila = 1;
    int i = 1;
    unsigned int number_6;
    cout << "\tEnter number :";
    cin >> number_6;

    while (i <= number_6)
    {
        factorila *= i;
        i++;
    }
    cout << "\tAnswer :" << factorila;
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 7";
    cout << "\n\n\n\n";
    unsigned int ededin_ustu = 1;
    unsigned int number_7;
    unsigned int number_7_;
    cout << "\tEnter first number :";
    cin >> number_7;
    cout << "\tEnter secound number :";
    cin >> number_7_;

    while (0 < number_7_)
    {
        ededin_ustu *= number_7;
        number_7_--;
    }
    cout << "\tThe square of the number: " << ededin_ustu;
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 9";
    cout << "\n\n\n\n";

    int number_9 = 0;
    cout << "\tEnter number :";
    cin >> number_9;

    int revers_number = 0;
    int t_m = number_9;

    while (t_m != 0) 
    {
        int u = t_m % 10;
        t_m /= 10;
        revers_number = revers_number * 10 + u;
    }

    cout << "\tAnswer : " << revers_number;
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 11";
    cout << "\n\n\n\n";
    unsigned int number_11;
    cout << "\tEnter number :";
    cin >> number_11;

    while (number_11 > 0)
    {
        if ((number_11 == 2) || (number_11 == 3))
        {
            cout << "\tSimple number";
        }
        else if ((number_11 % 2 == 0) || (number_11 % 3 == 0) || (number_11 % 7 == 0))
        {
            cout << "\tComplex number";
        }
        else
        {
            cout << "\tSimple number";
        }
        break;
    }
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 12";
    cout << "\n\n\n\n";
    unsigned int number_12_;
    unsigned int number_12;
    cout << "\tEnter first number :";
    cin >> number_12_;
    cout << "\tEnter secound number :";
    cin >> number_12;

    while (number_12_ < number_12 || number_12 < number_12_ || number_12 == number_12_)
    {
        if (number_12_ + 1 == number_12 || number_12_ - 1 == number_12)
        {
            cout << "\tTrue";
        }
        else if (number_12 + 1 == number_12_ || number_12 - 1 == number_12_)
        {
            cout << "\tTrue";
        }
        else if (number_12_ == number_12)
        {
            cout << "\tThe numbers are even";
        }
        else
        {
            cout << "\tFalse";
        }
        break;
    }
    cout << "\n\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 13";
    cout << "\n\n\n\n";

    unsigned int number_13;
    cout << "\tEnter a 6 - digit number :";
    cin >> number_13;

    while (number_13 >= 100000 && number_13 <= 999999)
    {
        int o = number_13 % 10;
        int n = (number_13 / 10) % 10;
        int u = (number_13 / 100) % 10;
        int r = (number_13 / 1000) % 10;
        int b = (number_13 / 10000) % 10;
        int a = (number_13 / 100000) % 10;

        if (a < b && b < r && r < u && u < n && n < o)
        {
            cout << "\nArt";
        }
        else
        {
            cout << "\nAzal";
        }
     break;
    }
    cout << "\n\n";
    cout << "=========================================================";
    cout << "\n\n";
    cout << "Tap - 14";
    cout << "\n\n\n\n";

    srand(time(NULL));
    unsigned int texmin = 0;
    unsigned int min = 0;
    unsigned int max = 50;
    unsigned int number_14;

    cout << "\tEnter number between 0 and 50 :";
    cin >> number_14;
    texmin++;
    int random = min + rand() % (max - min + 1);

    while (random != number_14)
    {

        if (number_14 < 51 || number_14 > -1)
        {
            if (random > number_14)
                cout << "\tEnter a larger number : ";
            else
                cout << "\tEnter a smaller number : ";

            cin >> number_14;
            texmin++;
        }
        else
        {
            cout << "Vrong number\n";
            break;
        }
    }
    cout << "\tRandom number :" << random << "\n";
    cout << "\tto try :" << texmin;

    cout << "\n\n\n";
    cout << "=========================================================";

}





