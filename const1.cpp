#include <iostream>
using namespace std;

class Demo
{
public:
    const int i, j;         // Constant characteristics     1
    Demo() : i(0),j(0)
    {
    }
    Demo(int x, int y): i(x),j(y)
    {
    }
    // constant input argument      2
    void gun(const int a, const int b) const        // Constant function    3
    {
        const int no = 10;  // Constant local variable  4
        const int x = 20;
        a++;
        no++;
    }
};
int main()
{
    const Demo obj(10,20);      // Constant object      5
    return 0;
}
