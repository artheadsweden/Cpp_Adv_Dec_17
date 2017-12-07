auto lookupValue( context information )
{
    static std::vector<int> values = initValues();
    int idx = compute index into values from context info;
    return values[idx];
}

lookupValue(myContextInfo) = 0; // shouldn't compile!