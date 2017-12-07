template<typename T>
void f(T* param);       // param now a pointer

int x = 22;             // int
const int *pcx = &x;    // ptr to const view of int

f(&x);                  // T ≡ int, param's type ≡ int*

f(pcx);                 // T ≡ const int,
                        // param's type ≡ const int*