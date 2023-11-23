#pragma once
#include <vector>
#include <algorithm>
#include <array>

class x {
    private:
        std::vector<int> its;
    public:
        x(std::vector<int> its);
        void sor();
        std::vector<int> bac();
};