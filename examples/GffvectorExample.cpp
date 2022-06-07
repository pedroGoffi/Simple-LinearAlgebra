#define use_vec2i
#include "../Gffvector.cpp"

#include <iostream>
int main(void){
    gff::vec2i vec{2,2};
    std::cout << vec << "   Is my vector\n";

    gff::vec2i other{69, 69};
    std::cout << vec << "-" << other << "=";
    vec -= other;
    std::cout << vec << "\n";
}
