class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;
public:
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }
    double getBalance() {
        return balance;
    }
};
