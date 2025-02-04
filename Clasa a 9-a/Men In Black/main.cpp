#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
//http://www.geeksforgeeks.org/find-next-greater-number-set-digits/
using namespace std;

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Given a number as a char array number[], this function finds the
// next greater number.  It modifies the same array to store the result
void findNext(char number[], int n)
{
    int i, j;

    // I) Start from the right most digit and find the first digit that is
    // smaller than the digit next to it.
    for (i = n-1; i > 0; i--)
        if (number[i] > number[i-1])
           break;

    // If no such digit is found, then all digits are in descending order
    // means there cannot be a greater number with same set of digits
    if (i==0)
    {
        cout << "Next number is not possible";
        return;
    }

    // II) Find the smallest digit on right side of (i-1)'th digit that is
    // greater than number[i-1]
    int x = number[i-1], smallest = i;
    for (j = i+1; j < n; j++)
        if (number[j] > x && number[j] < number[smallest])
            smallest = j;

    // III) Swap the above found smallest digit with number[i-1]
    swap(&number[smallest], &number[i-1]);

    // IV) Sort the digits after (i-1) in ascending order
    sort(number + i, number + n);

    cout << "Next number with same set of digits is " << number;
    return;
}


int main()
{
    int n,m,copn,nrcifn=0,cif[11],i;
    fstream f("mib.in",ios::in);
    fstream g("mib.out",ios::out);
    f>>n;
    if(n<0||n>1000000000)
    {
        cout<<"N nu corespunde restrictilor";
    }
    else
    {
        copn=n;
        while(copn)
        {
            nrcifn++;
            cif[nrcifn]=copn%10;
            copn/=10;
        }
        for(i=nrcifn;i>=1;i--)
        {
            g<<cif[i]<<" ";
        }

    }



    f.close();
    f.close();

}
