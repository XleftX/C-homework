#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<int> queue;
    std::string command;

    while (true) {
        std::cin >> command;

        if (command == "push") {
            int num;
            std::cin >> num;
            queue.push_back(num);
        } else if (command == "pop") {
            if (!queue.empty()) {
                queue.pop_front();
            }
        } else if (command == "print") {
            for (int num : queue) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        } else if (command == "exit") {
            break;
        }
    }

    return 0;
}