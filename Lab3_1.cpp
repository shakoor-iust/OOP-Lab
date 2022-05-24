#include <iostream>

using namespace std;

int main()
{
    char teacher;
    while (!(teacher == 'Y' || teacher == 'N'))
    {
        cout << "Are you a Teacher(Y/N)";
        cin >> teacher;
    }
    cout << "Enter Total Amount: ";
    int total;
    cin >> total;
    if (teacher == 'Y')
    {
        int discount = 10;
        if (total > 100)
            discount = 12;
        total = total - (total * discount / 100);
        cout << "Teacher's Discounted Amount:" << total << "(" << discount << "%)" << endl;
    }
    cout << "Sales Tax:" << (total * 0.05) << endl;
    cout << "Total Amount:" << total + total * 0.05 << endl;
}