#ifndef BASE64_H
#define BASE64_H
#include <iostream>
#include <map>
#include <cstddef>
#include <vector>

typedef unsigned char byte;

#define padding 0x40;

class base64
{
private:

    std::vector<byte> bvect;
    std::vector<byte> sextets;

public:
    base64();

    void parseData(std::vector<byte>&, uint len);
    std::map <unsigned char,unsigned char>b64Table;
    void encode(std::vector<byte>& barr);
    void decode();

};

#endif // BASE64_H
