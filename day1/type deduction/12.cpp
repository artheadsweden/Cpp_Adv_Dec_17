{
    const int cx = 0;
    auto lam = [cx] { ... };
    ...
}

class UpToTheCompiler {
private:
    const int cx;
    ...
};