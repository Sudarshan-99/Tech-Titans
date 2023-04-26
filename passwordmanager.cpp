#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, string> password_map;
    string username, password;

    while (true)
    {
        cout << "Enter a command (get/set/quit): ";
        string command;
        cin >> command;

        if (command == "get")
        {
            cout << "Enter a username: ";
            cin >> username;
            if (password_map.count(username) == 0)
            {
                cout << "Password not found" << endl;
            }
            else
            {
                cout << "Password for " << username << " is " << password_map[username] << endl;
            }
        }
        else if (command == "set")
        {
            cout << "Enter a username: ";
            cin >> username;
            cout << "Enter a password: ";
            cin >> password;
            password_map[username] = password;
            cout << "Password set for " << username << endl;
        }
        else if (command == "quit")
        {
            break;
        }
        else
        {
            cout << "Invalid command" << endl;
        }
    }

    return 0;
}
