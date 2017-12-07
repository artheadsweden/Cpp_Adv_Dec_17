{
    int cx = 0; // now non-const
    auto lam = [cx] { cx = 10; }; // error!
    ...
}

class UpToTheCompiler {
public:
    void operator()() const { cx = 10; } // cause of error
private:
    int cx;
};