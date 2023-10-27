#include <iostream>
#include <stdexcept>

class DatabaseConnection {
public:
    DatabaseConnection() {
        std::cout << "Database connection established." << std::endl;
        // Simulate connection setup
    }

    ~DatabaseConnection() {
        std::cout << "Database connection closed." << std::endl;
        // Simulate connection cleanup
    }

    // Database-related methods

    void executeQuery(const std::string& query) {
        if (!connected) {
            throw std::runtime_error("Not connected to the database.");
        }
        std::cout << "Executing query: " << query << std::endl;
    }

private:
    bool connected = true;
};

int main() {
    try {
        DatabaseConnection db;
        db.executeQuery("SELECT * FROM employees");
        // Use the database connection

        // Connection is automatically closed when the db object goes out of scope
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
