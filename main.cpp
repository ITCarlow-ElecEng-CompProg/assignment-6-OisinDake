//Oisin Dake
//Lab6
//Decimal / Binary Numbering Systems Conversion

#include <iostream>
#include <cstdio>
#include <windows.h>
#include <math.h>

using namespace std;


long long bin_2_dec(long long n)// long long meansstorage capacity of 64 bits
{
    int deci=0, i=0, rema;// equation bin to dec
    while (n!=0)
    {
        rema = n%10;
        n = n/10;
        deci= deci+rema*pow(2,i);
        ++i;
    }
    return deci;//return value
}
long long dec_2_bin(long long x)
{
    int rem,bina=0,i=1;
    while (x!=0)// equation dec to bin
    {
        rem=x%2;
        x=x/2;
        bina=bina+(rem*i);
        i=i*10;
    }
    return bina;//return vale
}


void menu(void)
{
	system("cls");// the control menu

	cout <<// to dispaly menu to user
            "\nDecimal / Binary Numbering Systems Conversion" <<
			"\n\nChoose one to use:" <<
			"\nb - Binary to decimal" <<
			"\nd - Decimal to binary"
			"\nq - quit" << endl;

	return;
}


int main(void)
{
    char input;//store input as char
    do
    {
        menu();

        cin >> input;// get in user input letter

        switch (input)// to take in input from user and use the pointer functions cal value
        {
            case 'b':   cout << "\nBinary to decimal conversion...\n" << endl;
                        long long n;
                        cout << "Enter a binary number: ";
                        cin >> n;
                        cout << n << " in binary = " << bin_2_dec(n) << " in decimal";// to display to user

                        getchar();
                        getchar();//to flush the cin buffer
                        break;

            case 'd':   cout << "\nDecimal to binary conversion n" << endl;
                        long long x;
                        cout << "Enter a decimal number: ";
                        cin >> x;
                        cout << x << " in decimal = " << dec_2_bin(x) << " in binary";
                        getchar();
                        getchar();//to flush the cin buffer
                        break;

            case 'q':   cout << "\nEnd of program \n" << endl;
                        cout << "Press any key to close "<< endl;// to quit program
                        getchar();
                        getchar();//to flush the cin buffer
                        break;

            default:	cout << "\nInvalid input\n" << endl;// not one valid input
                        cout << "Press buuton to continue" << endl;
                        getchar();
                        getchar();//to flush the cin buffer
                        break;
        }
    }
    while (input != 'q');

    return 0;
}
