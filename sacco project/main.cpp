#include <iostream>
#include <queue>
#include <stack>
#include <unordered_map>
#include <list>

using namespace std;

class SACCO {
    unordered_map<int, double> accounts;       // Account ID -> Balance
    unordered_map<int, list<string>> history; // Account ID -> Transaction History

public:
    //Account Creation
    void creat_acct(){
        string un;
        int pn;
        cout<< "add account\n";
        cout<< "Enter user name\t";
        cin>>un;
        cout<< "create pin\t";
        cin>>pn;
    }
    // Deposit Function
    void deposit(int accountID) {
        double amount;
        cout << "Enter the amount to deposit: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid deposit amount.\n";
            return;
        }
        //accounts[accountID] += amount;
        //history[accountID].push_back("Deposited: " + to_string(amount));
        //cout << "Deposit successful. New Balance: " << accounts[accountID] << endl;
    }

    // Withdrawal Function
    void withdraw(int accountID) {
        double amount;
        cout << "Enter the amount to withdraw: ";
        cin >> amount;

        if (accounts[accountID] < amount) {
            cout << "Insufficient funds.\n";
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        } else {
            accounts[accountID] -= amount;
            history[accountID].push_back("Withdrew: " + to_string(amount));
            cout << "Withdrawal successful. New Balance: " << accounts[accountID] << endl;
        }
    }

    // Statement Retrieval
    void getStatement(int accountID) {
        if (history.find(accountID) == history.end()) {
            cout << "No transaction history for this account.\n";
            return;
        }
        cout << "Transaction History for Account " << accountID << ":\n";
        for (const auto& entry : history[accountID]) {
            cout << entry << "\n";
        }
    }
};

int main() {
    SACCO sacco;
    int accountID = 1; // Using a single account ID for simplicity
    int choice;
    sacco.creat_acct();

    do {
        cout << "\n=====SACCO Management System====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. View Statement\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                sacco.deposit(accountID);
                break;
            case 2:
                sacco.withdraw(accountID);
                break;
            case 3:
                sacco.getStatement(accountID);
                break;
            case 4:
                cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
