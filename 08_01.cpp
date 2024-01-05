#include <iostream>
#include <list>

int main() {
    std::list<int> ints;

    // 从标准输入读取10个整数，并将它们添加到链表中
    for (int i = 0; i < 10; i++) {
        int num;
        std::cin >> num;
        ints.push_back(num);
    }

    // 删除链表中的第一个和最后一个元素
    ints.pop_front();
    ints.pop_back();

    // 打印剩余的链表
    for (int num : ints) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}