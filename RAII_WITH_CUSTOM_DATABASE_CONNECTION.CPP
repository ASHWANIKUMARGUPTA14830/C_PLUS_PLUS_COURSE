#include <iostream>
#include <stdexcept>

class CustomDatabaseConnection {
public:
    CustomDatabaseConnection() {
        std::cout << "Custom database connection established." << std::endl;
        // Simulate connection setup
    }

    ~CustomDatabaseConnection() {
        std::cout << "Custom database connection closed." << std::endl;
        // Simulate connection cleanup
    }

    void executeQuery(const std::string& query) {
        if (!connected) {
            throw std::runtime_error("Not connected to the custom database.");
        }
        std::cout << "Executing query: " << query << std::endl;
    }

private:
    bool connected = true;
};

int main() {
    try {
        CustomDatabaseConnection db;
        db.executeQuery("SELECT * FROM products");
        // Use the custom database connection

        // Connection is automatically closed when the db object goes out of scope
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
