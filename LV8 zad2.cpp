

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int brojac = 0;

    for (int i = a; i <=b; i++) {
        cout << i << " ";
        brojac++;
        if (brojac == 10 && i < b) {
            cout << endl;
            brojac = 0;
        }
    }
    return 0;
}

