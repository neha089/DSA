#include <iostream>
#include <vector>
#include <unordered_set>

int countSimilarPairs(const std::vector<int>& a, const std::vector<int>& b) {
    std::unordered_set<std::pair<int, int>> pairs;
    int count = 0;
    
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            int sum = a[i] + b[j];
            int product = a[i] * b[j];
            std::pair<int, int> pair = std::make_pair(sum, product);
            
            if (pairs.count(pair) == 0) {
                pairs.insert(pair);
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    std::vector<int> a;
    std::vector<int> b;
    int size;
    
    std::cout << "Enter the size of the vectors: ";
    std::cin >> size;
    
    std::cout << "Enter the elements of vector A: ";
    for (int i = 0; i < size; i++) {
        int element;
        std::cin >> element;
        a.push_back(element);
    }
    
    std::cout << "Enter the elements of vector B: ";
    for (int i = 0; i < size; i++) {
        int element;
        std::cin >> element;
        b.push_back(element);
    }
    
    int result = countSimilarPairs(a, b);
    std::cout << "Number of similar pairs: " << result << std::endl;
    
    return 0;
}
