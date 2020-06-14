#include <iostream>
#include "base64.h"
#include <bitset>
int main()
{
    std::string str="49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";

    base64 bb;
    std::vector<byte> bv(str.begin(),str.end());
//    bv.push_back(0x02);
//    bv.push_back(0x02);
//    bv.push_back(0x02);
//    bv.push_back(0x02);
//    bv.push_back(0x02);
//    bv.push_back(0xff);
//    bv.push_back(0x0f);
//    bb.parseData(bv,7);

    for(auto &b : bv)
    {
        std::cout << std::bitset<8>(b)<<'\n';
        //std::cout << (b)<<'\n';
    }
    bb.encode(bv);
    std::cout<<std::endl;
    for(auto &b : bv)
    {
        //std::cout << std::bitset<8>(b)<<'\n';
        std::cout << (b);
    }

    return 0;
}
