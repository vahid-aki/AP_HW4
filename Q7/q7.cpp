#include<iostream>
#include<vector>
#include<string>
#include <set>
#include <ctime>

template<typename T>
void display(const T& vec);

inline unsigned random(size_t count) {
    return 1 + static_cast<unsigned>(std::rand() % (count+1));
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    int a[50]{};
    for(int i{}; i < 50; i++)
    {
        a[i] = i;
    }
    std::set<int> s1{std::begin(a), std::end(a)};

    std::cout << "a elments: \t";
    for(auto iter{s1.begin()}; iter != s1.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;

//    srand (std::time(NULL));
    int b[50]{};
    for(int i{}; i < 50; i++)
    {
        b[i] = random(49);
    }
    std::cout << "b elements: \t";
    for(auto s : b)
        std::cout << s << " ";
    std::cout << std::endl;

    std::set<int> s_b{std::begin(b), std::end(b)};

    std::cout << "b after deleting repeated elements: \t";
    for(auto iter{s_b.begin()}; iter != s_b.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;


    std::set<int> s_c{};
    for(int i{}; i < 50; i++)
    {
        s_c.insert(i);
    }
    std::cout << "c elements: \t";
    for(auto iter{s_c.begin()}; iter != s_c.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}

template<typename T>
void  display(const T& vec) {
    for(auto iter{vec.begin()}; iter != vec.end(); iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;
}
