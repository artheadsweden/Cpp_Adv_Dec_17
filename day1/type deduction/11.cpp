template<typename T>
void f(T param);

f( { 1, 2, 3 } );           // error! type deduction fails

auto x1 { 1, 2, 3 };        // c++ 14 x's type ≡
                            // std::initializer_list<int>

auto x2 = { 1, 2, 3 };      // x's type ≡
                            // std::initializer_list<int>

// In C++17, in C++14 all would become std::initilizer_list 
auto a {1};                 // a will become an int
auto b = {1};               // b will become std::initilizer_list
auto c  = {1, 2, 3};        // c will become std::initilizer_list
auto d {1, 2, 3};           // Error, we are not allowed to do this

