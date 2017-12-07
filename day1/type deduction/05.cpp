int x = 22;             // as before
const int cx = x;       // as before
const int& rx = x;      // as before

auto& v1 = x;           // v1's type ≡ int& (auto ≡ int)

auto& v2 = cx;          // v2's type ≡ const int&
                        // (auto ≡ const int)

auto& v3 = rx;          // v3's type ≡ const int&
                        // (auto ≡ const int)

const auto& v4 = x;     // v4's type ≡ const int& (auto ≡ int)

const auto& v5 = cx;    // v5's type ≡ const int&
                        // (auto ≡ const int)

const auto& v6 = rx;    // v6's type ≡ const int&
                        // (auto ≡ const int)