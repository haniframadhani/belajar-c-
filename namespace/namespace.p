# 1 "namespace.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "namespace.cpp"

# 1 "otong.h" 1
namespace otong
{
    int b = 10;
    void fungsi()
    {
        std::cout << "ini adalah fungsi si otong" << std::endl;
    }
    void cout(int a)
    {
        std::cout << a << std::endl;
    }
}
# 3 "namespace.cpp" 2

void fungsi2()
{
 std::cout << "ini adalah fungsi biasa" << std::endl;
}

int main()
{
 fungsi2();
 std::cout << otong::b << std::endl;
 otong::fungsi();
 otong::cout(100);

 return 0;
}
