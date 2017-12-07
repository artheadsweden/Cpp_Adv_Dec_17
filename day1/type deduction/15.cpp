{
    const int cx = 0; // now const
    auto lam = [cx] mutable { cx = 10; }; // still error!
    ...
}

class UpToTheCompiler {
public:
    void operator()() { cx = 10; }
private:
    const int cx; // cause of error
};