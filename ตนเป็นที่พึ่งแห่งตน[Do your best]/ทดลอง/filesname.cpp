#include <string>
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {

    const std::string dir = "11\\09\\2564";

    const std::string path = "/home/rn0z/แข่งเขียนโปรแกรม/ch1/AC/" + dir;

    int count = 1;

    try {


        for (const auto &entry:fs::directory_iterator(path)) {

            int fileName = entry.path().string().substr(path.length() + 1).length();

            printf("%d - %s\n", count, entry.path().string().substr(path.length() + 1, fileName - 4).c_str());

            count = count + 1;

        }

    } catch (...) {

        std::cout << "Error occur now!!!" << '\n';

        std::cout << "--> DIRECTORY NOT FOUND <--" << '\n';

    }

    return 0;

}