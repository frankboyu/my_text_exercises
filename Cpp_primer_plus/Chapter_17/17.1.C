#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    char ch;
    int num = 0;
    cout << "Enter input: ";
    while(cin.peek() != '$')
    {
        num++;
        cin.get(ch);
    }
    cout << num << endl;
    cout << char(cin.peek()) << endl;
    return 0;
}