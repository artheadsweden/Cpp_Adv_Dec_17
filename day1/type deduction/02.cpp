template<typename T>
void f(T& param);   // param is a reference

int x = 22;         // int
const int cx = x;   // copy of int
const int& rx = x;  // ref to const view of int

f(x);               // T ≡ int, param's type ≡ int&
f(cx);              // T ≡ const int,
                    // param's type ≡ const int&
f(rx);              // T ≡ const int,
                    // param's type ≡ const int&