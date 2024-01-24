#include<iostream>
using namespace std;

int power(int num, int exp)
{
    if (exp == 0)
        return 1;
    else
        return (num*power(num, exp-1));
}

int charToInt(char digit)
{
    switch (digit)
    {
        case '0':   return 0;
        case '1':   return 1;
        case '2':   return 2;
        case '3':   return 3;
        case '4':   return 4;
        case '5':   return 5;
        case '6':   return 6;
        case '7':   return 7;
        case '8':   return 8;
        case '9':   return 9;
        case 'A':   case 'a':   return 10;
        case 'B':   case 'b':   return 11;
        case 'C':   case 'c':   return 12;
        case 'D':   case 'd':   return 13;
        case 'E':   case 'e':   return 14;
        case 'F':   case 'f':   return 15;
        default: cout<<digit<<" is an Invalid Digit!"; return 0;
    }
}

char intToChar(int digit)
{
    switch (digit)
    {
        case 0: return '0';
        case 1: return '1';
        case 2: return '2';
        case 3: return '3';
        case 4: return '4';
        case 5: return '5';
        case 6: return '6';
        case 7: return '7';
        case 8: return '8';
        case 9: return '9';
        case 10: return 'A';
        case 11: return 'B';
        case 12: return 'C';
        case 13: return 'D';
        case 14: return 'E';
        default: return 'F';
    }
}

void toDecimal(string num, int &dec_num, int sbase, int &flag)
{
    char digit;
    int len = num.length(), val, dec = 0, exp = 0;
    for (int ctr = len-1; ctr>=0; ctr--)
    {
        digit = num[ctr];
        val = charToInt(digit);
        if (val >= sbase)
        {
            flag = 1;
        }
        dec = dec + (val * power(sbase, exp));
        exp++;
    }
    dec_num = dec;
}

string toDestination(int dec_num, int dbase)
{
    int mod;
    string dest_num = "", digit, rev_num = "";
    while (dec_num != 0)
    {
        mod = dec_num%dbase;
        digit = intToChar(mod);
        rev_num = rev_num + digit;
        dec_num = dec_num/dbase;
    }
    for (int ctr = rev_num.length() - 1; ctr >= 0 ; ctr--)
    {
        dest_num = dest_num + rev_num[ctr];
    }
    return dest_num;
}

int main()
{
    string num, dest_num;
    int sbase, dbase, dec_num, flag = 0;
    cout<<"Enter a number, its source base (2-16) and destination base (2-16): ";
    cin>>num>>sbase>>dbase;
    toDecimal(num, dec_num, sbase, flag);
    if (flag == 0)
    {
        dest_num = toDestination(dec_num, dbase);
        cout<<"("<<num<<") to base "<<sbase<<" = ("<<dest_num<<") to base "<<dbase<<".";
    }
    else
        cout<<num<<" is not a valid number for the number system of base "<<sbase<<".";
}
