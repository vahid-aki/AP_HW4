#include<iostream>
#include<vector>
#include<string>
//#include<algorithm>
#include <numeric>
#include <functional>
#include <set>

/*template<typename T>
double avg(const T& v);*/

template<typename T>
void display(const T& vec);


/*struct Comp {
    Comp (std::vector<int> v): vec{v} {};
    bool operator() (const int& a, const int& b){return std::abs(static_cast<double>(a)-avg(vec)) < std::abs(static_cast<double>(b)-avg(vec)); }
    private:
    std::vector<int> vec;
};*/

//template <typename T>
//bool (*comp1)(const T& a, const T& b);

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5, 4, 3, 2, 1};
    std::cout << "original vector:\t";
    display(vec);

    // removing 2 from vector
    std::cout << "vector after remove:\t";
    auto oit = std::remove(vec.begin(), vec.end(), 2);
    for(auto iter{vec.begin()}; iter != oit; iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;

    // deleting vectors elements
    auto it = std::find(vec.begin(), vec.end(), 2);
    if (it != vec.end()) {
        // swap the one to be removed with the last element
        // and remove the item at the end of the container
        // to prevent moving all items after '2' by one
        std::swap(*it, vec.back());
        vec.pop_back();
    }
    vec.pop_back();
    std::cout << "vector after deleting 2:\t";
    display(vec);

    // 2* vectors elements
    std::vector<int> vec2(10);
    auto oit2 = std::copy_if(begin(vec), end(vec), begin(vec2), [](int& a){a=a*2; return 1>0;});
    vec2.erase(oit2,vec2.end());
    std::cout << "vector after 2*elements:\t";
    display(vec2);


    /*
    //std::vector<int> vec3(10);
    //auto oit3 = std::copy_if(begin(vec2), end(vec2), begin(vec3), [&vec2](const int& a, const int& b){return std::abs(a-avg(vec2)) > std::abs(b-avg(vec2)); });
    //auto oit3 = std::copy_if(begin(vec2), end(vec2), begin(vec3), bool(*comp)(const int& a, const int& b){return std::abs(a-avg(vec2)) > std::abs(b-avg(vec2)); });
    //std::vector<int> vec2(10);

    //wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww
    *//*auto oit3 = std::copy_if(begin(vec2), end(vec2), begin(vec3), [&vec2](const int& a, const int& b){return std::abs(a-avg(vec2)) > std::abs(b-avg(vec2)); });
    //vec3.erase(oit3,vec3.end());
    //std::sort(vec3.begin(), vec3.end());
    std::cout << "vector after elements:\t";
    for(auto iter{vec3.begin()}; iter != oit3; iter++)
        std::cout << *iter << " ";
    std::cout << std::endl;
     */

    //deleteing repeated elments
    std::set<int> st(vec2.begin(), vec2.end());
    copy(vec2.begin(), vec2.end(), inserter(st, st.begin()));
    std::cout << "vector after deleting repeated elemets:\t";
    display(st);

    std::set<int> st1;
    std::copy_if(begin(st), end(st), inserter(st1, st1.begin()), [](const int& a){return a<3;});
    std::cout << "vector after deleting >3 elemets:\t";
    display(st1);
    return 0;
}

template<typename T>
void  display(const T& vec) {
    for(auto v : vec)
        std::cout << v << " ";
    std::cout << std::endl;
}

/*template<typename T>
double avg(const T& v) {
    return 1.0 * std::accumulate(v.begin(), v.end(), 0) / v.size();
}*/
