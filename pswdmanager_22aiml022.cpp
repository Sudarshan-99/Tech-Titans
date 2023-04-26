#include <iostream>
#include <string>

using namespace std;

const int MAX_USERS = 10;
void add_user(string usernames[], string passwords[], int& num_users) {
    if (num_users < MAX_USERS) {
        cout << "Enter new username: ";
        cin >> usernames[num_users];
        cout << "Enter new password: ";
        cin >> passwords[num_users];
        num_users++;
        cout << "User added successfully." << endl;
    } else {
        cout << "Maximum number of users reached." << endl;
    }
}


void remove_user(string usernames[], string passwords[], int& num_users) {
    string username, password;
    cout << "Enter username to remove: ";
    cin >> username;
    cout << "Enter password to confirm: ";
    cin >> password;
    for (int i = 0; i < num_users; i++) {
        if (usernames[i] == username && passwords[i] == password)
        {
            for (int j = i; j < num_users - 1; j++) {
                usernames[j] = usernames[j+1];
                passwords[j] = passwords[j+1];
            }
            num_users--;
            cout << "User removed successfully." << endl;
            return;
        }
    }
    cout << "Username and password not found." << endl;
}
void view_passwords(string usernames[], string passwords[], int num_users) {
    cout << "Usernames and passwords:" << endl;
    for (int i = 0; i < num_users; i++) {
        cout << usernames[i] << "\t" << passwords[i] << endl;
    }
}

int main() {
    string usernames[MAX_USERS];
    string passwords[MAX_USERS];
    int num_users = 0;
    int choice;

    do
    {
        cout << "1. Add user" << endl;
        cout << "2. Remove user" << endl;
        cout << "3. View passwords" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                add_user(usernames, passwords, num_users);
                break;
            case 2:
                remove_user(usernames, passwords, num_users);
                break;
            case 3:
                view_passwords(usernames, passwords, num_users);
                break;
            case 4:
                cout << "Goodbye!" << endl;
        }
    } while (choice != 4);

    return 0;
}


