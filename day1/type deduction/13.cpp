{
    const int cx = 0;
    auto lam = [cx]{ ... };
    ...
}

class UpToTheCompiler {
private:
    const int cx;
    ...
};





//==============
{
    const int cx = 0;
    auto lam = [cx = cx]{ ... };
    ...
}

class UpToTheCompiler {
private:
    int cx;
    ...
};