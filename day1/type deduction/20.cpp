decltype(auto) authorizeAndIndex(std::vector<int>& v, int idx)
{
    authorizeUser();
    return v[idx];
}

authorizeAndIndex(myVec, 10) = 0; // should compile!