const std::vector<Widget>&      // return type is lvalue
   findVec(const VecHandle&);   // expr and has lvalue-ref
                                // type


int arr[10];
arr[0] = 5;             // arr[0]'s type is int,
                        // but it acts like int&
decltype(arr[0]) ≡ int& // because arr[0] is
                        // lvalue expression                                