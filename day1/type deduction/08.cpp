int x = 22;         // as before
const int cx = x;   // as before
const int& rx = x;  // as before

auto v1 = x;        // v1's type ≡ int (auto ≡ int)

auto v2 = cx;       // v2's type ≡ int (auto ≡ int)

auto v3 = rx;       // v3's type ≡ int (auto ≡ int)

auto v4 = rx;       // v4's type ≡ int

auto& v5 = rx;      // v5's type ≡ const int&

auto&& v6 = rx;     // v6's type ≡ const int&
                    // (rx is lvalue)