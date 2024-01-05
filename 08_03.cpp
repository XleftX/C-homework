#include <iostream>
#include <vector>
#include <algorithm>

void uniqueSort(std::vector<int>& container) {
    // 去除重复元素
    container.erase(std::unique(container.begin(), container.end()), container.end());
    
    // 升序排序
    std::sort(container.begin(), container.end());
}

int main() {
    std::vector<int> nums;
    
    // 从标准输入读取一系列整数
    for (int i = 0; i < 10; i++) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    
    // 调用uniqueSort函数进行去重和排序
    uniqueSort(nums);
    
    // 打印处理后的容器元素
    for (int num : nums) {
        std::cout << num << " ";    }
    std::cout << std::endl;
    
    return 0;
}