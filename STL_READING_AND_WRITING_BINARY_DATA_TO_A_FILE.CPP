#include <iostream>
#include <fstream>

struct Data {
    int x;
    double y;
};

int main() {
    Data data = {42, 3.14};

    std::fstream file("data.bin", std::ios::binary | std::ios::in | std::ios::out | std::ios::trunc);

    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(&data), sizeof(Data));

        Data readData;
        file.seekg(0);
        file.read(reinterpret_cast<char*>(&readData), sizeof(Data));

        std::cout << "Read data: x = " << readData.x << ", y = " << readData.y << std::endl;

        file.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }

    return 0;
}
