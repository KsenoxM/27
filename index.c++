#include "iostream"
#include "string"
 
using namespace std;
 
void main()
{
    setlocale(0, "");
    string pass = "123qwe";
    int k;
    do
    {
        cout << "\n 1 - Ввод пароля\n";
        cout << " 2 - Выход\n";
        cout << " Выбор: ";
        cin >> k;
        switch (k)
        {
        case 1:
        {
            cout << "\nВведите пароль: ";
            string buf;
            cin.get();
            getline(cin, buf);
            if (buf != pass) cout << "Пароль неверный!\n";
            else
            {
                int l;
                do
                {
                    cout << " 1 - Просмотр баланса\n";
                    cout << " 2 - Снятие наличных\n";
                    cout << " 3 - Снятие наличных\n";
                    cout << " 0 - Выход\n";
                    cout << " Выбор: ";
                    cin >> l;
                    //switch(l){...}
                } while (l != 0);
                break;
            }
        }
        case 2:
        {
            break;
        }
        }
    } while (k != 2);
}