#ifndef BASE64_H
#define BASE64_H
#include <iostream>
#include <map>
#include <cstddef>
#include <vector>

typedef unsigned char byte;



class base64
{
private:

    std::vector<byte> bvect;
    std::vector<byte> sextets;
    byte PADDING = 0x40;

public:
    base64();


    void parseData(std::vector<byte>&, unsigned int len);
    std::map <unsigned char,unsigned char>b64Table;
    int encode(std::string str,std::vector<byte>& barr);
    void decode();
     int HexToBytes( std::string& ,std::vector<byte>& );

};

#endif // BASE64_H
