extern "C"
{
    __declspec(dllexport) int add(int x, int y);
    __declspec(dllexport) int minus(int x, int y);
    __declspec(dllexport) int multiply(int x, int y);
    typedef int (*DUCallbackType)(int, int);
    __declspec(dllexport) void caller(DUCallbackType callback);
    __declspec(dllexport) int cbimpl(int x, int y);
}