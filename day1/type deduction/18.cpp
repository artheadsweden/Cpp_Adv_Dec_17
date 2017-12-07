int x;
decltype(x) ≡ int       // x is lvalue expression, but
                        // also a name ⇒ name rule prevails
decltype((x)) ≡ int&    // (x) is lvalue expression, but
                        // isn't a name