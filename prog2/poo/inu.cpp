#include "inu.h"
#include <vector>
#include <algorithm>

x::x(std::vector<int> ini){
    x::its = ini;
}

void x::sor(){
    std::sort(x::its.begin(), x::its.end());
}

std::vector<int> x::bac(){
    return x::its;
}