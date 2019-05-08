#include<iostream>
#include<memory>
#include<vector>
#include<string>


template<class T>
void  display(const T& vec, const int& i);

int main() {
  std::vector<std::unique_ptr<std::string>> vec(1000);
    
    std::string str1{"Str "};
    
    for(int i{}; i < 1000; i++) {
      vec.push_back(std::make_unique<std::string>(str1+std::to_string(i)));
      display(vec, i);
    }

    std::cout << std::endl;
    std::cout << "vec with reserved size" << std::endl;
    std::cout << std::endl;

    int N {1000};

    std::vector<std::unique_ptr<std::string>> vec2;

    // Reserve space in v2
    vec2.reserve(N);

    for(int i{}; i < N; i++) {
        vec2.push_back(std::make_unique<std::string>(str1+std::to_string(i)));
        display(vec2, i);
    }

    return 0;
}


template<class T>
void  display(const T& vec, const int& i) {
    std::cout  << "Str "+std::to_string(i) << "  :  " << "vec's size: " << vec.size() << "   &   vec's capacity: " << vec.capacity() << std::endl;
}
