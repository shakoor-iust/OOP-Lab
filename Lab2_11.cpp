#include <iostream>

using namespace std;

struct sterling
{
    int pounds;
    int shillings;
    int pence;

    inline sterling operator+(sterling s)
    {
        sterling sum;
        sum.pounds = pounds + s.pounds;
        sum.shillings = shillings + s.shillings;
        sum.pence = pence + s.pence;
        return sum;
    }
    void print()
    {
        cout << pounds << "." << shillings << "." << pence << endl;
    }
};

int main()
{
    sterling s1, s2, s3;
    cout << "Enter the first sterling: ";
    cin >> s1.pounds >> s1.shillings >> s1.pence;
    cout << "Enter the second sterling: ";
    cin >> s2.pounds >> s2.shillings >> s2.pence;
    s3 = s1 + s2;
    s3.print();
    return 0;
}