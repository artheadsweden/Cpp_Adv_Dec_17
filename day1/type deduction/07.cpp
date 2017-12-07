template<typename T>
void f(T param);    // param passed by value

int x = 22;         // as before
const int cx = x;   // as before
const int& rx = x;  // as before

f(x);               // T ≡ int, param's type ≡ int

f(cx);              // T ≡ int, param's type ≡ int

f(rx);              // T ≡ int, param's type ≡ int
