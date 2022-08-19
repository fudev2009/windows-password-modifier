#define _WIN32_WINNT 0X0501
#include <iostream>
#include <string.h>
#include <chrono>
#include <mingw.thread.h>
using namespace std;
int language, theme;
string userName, command;
int main()
{
    system("title Windows Password Modifier - Created by Nguyen Lan Dung");
    cout << "Have you read the README file yet? If the answer is no, then you must close this program and read that first" << endl
         << "Ban da doc file README chua? Neu chua, hay dong chuong trinh lai va doc no truoc" << endl;
    cout << "Type 1 to use English interface" << endl
         << "Nhap 2 de su dung giao dien Tieng Viet" << endl;
    cin >> language;
    while (language != 1 && language != 2)
    {
        cout << "You need to type 1 or 2. Please try again" << endl
             << "Ban can nhap 1 hoac 2. Hay nhap lai" << endl;
        cin >> language;
    }
    if (language == 1)
    {
        cout << "Type 1 for light theme or 2 for dark theme" << endl;
        cin >> theme;
        while (theme != 1 && theme != 2)
        {
            cout << "You need to type 1 or 2. Please try again" << endl;
            cin >> theme;
        }
        if (theme == 1)
        {
            system("color 70");
        }
        if (theme == 2)
        {
            system("color 07");
        }
        cout << "This program should work for all computer. If it doesn't work, it's because you didn't follow the instructions" << endl;
        this_thread::sleep_for(chrono::seconds(3));
        system("net user");
        cout << "Change password of user: ";
        cin >> userName;
        command = "net user " + userName + " *";
        cout << "Type your new password in" << endl
             << "Or, if you want to remove the current password, press Enter twice" << endl;
        system(command.c_str());
    }
    if (language == 2)
    {
        cout << "Nhap 1 de su dung light theme hoac 2 de su dung dark theme" << endl;
        cin >> theme;
        while (theme != 1 && theme != 2)
        {
            cout << "Ban can nhap 1 hoac 2. Hay nhap lai" << endl;
            cin >> theme;
        }
        if (theme == 1)
        {
            system("color 70");
        }
        if (theme == 2)
        {
            system("color 07");
        }
        cout << "Chuong trinh nay co the chay tren hau het moi may tinh. Neu ban phat hien no khong chay, rat co the ban da quen doc huong dan su dung" << endl;
        this_thread::sleep_for(chrono::seconds(3));
        system("net user");
        cout << "Nhap ten user: ";
        cin >> userName;
        cout << "Nhap mat khau moi" << endl
             << "Con neu muon xoa mat khau hien tai, nhan Enter 2 lan" << endl;
        command = "net user " + userName + " *";
        system(command.c_str());
    }
    system("pause");
}