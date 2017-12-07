void someFunc(const int * const param1, // const ptr to const
              const int * param2,       // ptr to const
              int * param3)             // ptr to non-const
{
    auto p1 = param1;       // p1's type ≡ const int*
                            // (param1's constness ignored)
    auto p2 = param2;       // p2's type ≡ const int*
    auto p3 = param3;       // p3's type ≡ int*
    // …
}