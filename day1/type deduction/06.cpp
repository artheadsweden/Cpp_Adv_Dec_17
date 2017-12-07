template<typename T>
void f(T&& param);
f(expr);

int x = 22;             // as before
const int cx = x;       // as before
const int& rx = x;      // as before

f(x);                   // x is lvalue ⇒ T ≡ int&, param's type ≡ int&

f(cx);                  // cx is lvalue ⇒ T ≡ const int&,
                        // param's type ≡ const int&

f(rx);                  // rx is lvalue ⇒ T ≡ const int&,
                        // param's type ≡ const int&

f(22);                  // x is rvalue ⇒ no special handling;
                        // T ≡ int, param’s type is int&&