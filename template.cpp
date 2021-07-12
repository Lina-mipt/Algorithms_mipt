#include <iostream>
#include <fstream>
#include <vector>

void solve(std::istream &in, std::ostream &out)
{
}

int main()
{
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
#ifdef LOCAL
    std::ifstream fin("in.txt");
    solve(fin, std::cout);
#else
    solve(std::cin, std::cout);
#endif
}
