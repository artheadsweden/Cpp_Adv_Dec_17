template<typename T>
void f(const T& param);

int x = 22;         // as before
const int cx = x;   // as before
const int& rx = x;  // as before

f(x);               // T ≡ int, param's type ≡ const int&

f(cx);              // T ≡ const int,
                    // param's type ≡ const int&

f(rx);              // T ≡ const int,
                    // param's type ≡ const int&