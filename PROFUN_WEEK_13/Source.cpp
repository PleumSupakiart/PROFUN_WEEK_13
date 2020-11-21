#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct {
    
    int bin_digit;

}Num;

Num cornvert(int* num)
{
    Num n;
    int bin_num[128];
    int i = 0;
    if (*num != 0 || *num > 0)
    {
        while (*num != 0)
        {
            n.bin_digit = *num % 2;
            bin_num[i] = n.bin_digit;
            *num /= 2;
            i++;
        }
    }

    cout << "Binary : ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << bin_num[j];
    }
    return n;
}

int main()
{
    int dec_num;

    cout << "Enter Decimal Number : ";
    cin >> dec_num;
 
    cornvert(&dec_num);

	return 0;
}