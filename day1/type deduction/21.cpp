decltype(auto) lookupValue( context information )
{
    static std::vector<int> values = initValues();
    int idx = compute index into values from context info;
    auto retVal = values[idx]; // retVal's type is int
    return retVal; // returns int
}

decltype(auto) lookupValue( context information )
{
    static std::vector<int> values = initValues();
    int idx = compute index into values from context info;
    auto retVal = values[idx]; // retVal's type is int
    return (retVal); // returns int& (to local variable!)
}                    