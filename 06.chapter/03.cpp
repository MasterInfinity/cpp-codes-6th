#include <iostream>

using namespace std;

int main(void)
{
    char input;
    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore        p) pianist" << endl;
    cout << "t) tree             g) game" << endl;
    // 需要消耗掉空字符
    cin.get(input).get();
    /*
        不能使用 input!= 'c' && input!= 'p' && input!= 't' && input!= 'g'
        因为当输入c, p, t, g时，while循环将结束，无法打印正确的菜单信息
    */
    while (isalpha(input))
    {
        switch (input)
        {
        case 'c':
            cout << "A maple is a carnivore." << endl;
            break;
        case 'p':
            cout << "A maple is a pianist." << endl;
            break;
        case 't':
            cout << "A maple is a tree." << endl;
            break;
        case 'g':
            cout << "A maple is a game." << endl;
            break;
        default:
            cout << "Please enter a c, p, t, or g:";
            break;
        }

        cin.get(input).get();
    }

    return 0;
}