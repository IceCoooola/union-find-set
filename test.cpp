#include "UnionFindSet.h"

int main() 
{
    
    UnionFindSet uf(10);
    uf.Union(2, 1);
    uf.Union(3, 1);
    std::cout<<uf.InSet(3, 1)<<std::endl;
    std::cout<<uf.InSet(2, 1)<<std::endl;
    return 0;
}
