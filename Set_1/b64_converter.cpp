#include <iostream>
#include <iomanip>
#include "base64.h"
#include <bitset>
#include <string>
#include <assert.h>


int main(int  argc,char **argv)
{
    assert(argc > 1);
    //std::string str="
    //49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
    std::string str(argv[1]);
    std::vector<byte> encodedArray;
    base64 b64Module;


    b64Module.encode(str,encodedArray);






    std::cout<<"string input: \n"<<str<<"\n"<<"base64 encoded output:"<<std::endl;

    for(auto &b : encodedArray)
    {
        //std::cout << std::bitset<8>(b)<<'\n';

        std::cout << (b);
    }

    std::cout<<std::endl;
    return 0;
}
