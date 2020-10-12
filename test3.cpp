#include<iostream>
#include<string>
using namespace std;

void calc() {
    char a;
    int b,c,d;
    string f;
    cout << "Hi\n\nWelcome in sciencewolf calculator\n\nWrite what operations want you to do\n\n";
    cin >> a;
    if (a == '+')f = "add";
    if (a == '-')f = "subtract";
    if (a == '*')f = "multiple";
    if (a == '/')f = "divide";
    cout << "Now write two numbers to " << f << "\n\n";
    cin >> b;
    cin >> c;
    if (a == '+')d = b+c;
    if (a == '-')d = b-c;
    if (a == '*')d = b*c;
    if (a == '/')d = b/c;
    cout << "The result is:  " << d << "\n\n";
    system("pause");
}

int main() {
    calc();
}
