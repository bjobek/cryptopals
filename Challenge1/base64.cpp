#include "base64.h"

#include <bitset>
#include <string>
base64::base64()
{
    b64Table[0x00]='A';
    b64Table[0x01]='B';
    b64Table[0x02]='C';
    b64Table[0x03]='D';
    b64Table[0x04]='E';
    b64Table[0x05]='F';
    b64Table[0x06]='G';
    b64Table[0x07]='H';
    b64Table[0x08]='I';
    b64Table[0x09]='J';
    b64Table[0x0A]='K';
    b64Table[0x0B]='L';
    b64Table[0x0C]='M';
    b64Table[0x0D]='N';
    b64Table[0x0E]='O';
    b64Table[0x0F]='P';
    b64Table[0x10]='Q';
    b64Table[0x11]='R';
    b64Table[0x12]='S';
    b64Table[0x13]='T';
    b64Table[0x14]='U';
    b64Table[0x15]='V';
    b64Table[0x16]='W';
    b64Table[0x17]='X';
    b64Table[0x18]='Y';
    b64Table[0x19]='Z';
    b64Table[0x1A]='a';
    b64Table[0x1B]='b';
    b64Table[0x1C]='c';
    b64Table[0x1D]='d';
    b64Table[0x1E]='e';
    b64Table[0x1F]='f';
    b64Table[0x20]='g';
    b64Table[0x21]='h';
    b64Table[0x22]='i';
    b64Table[0x23]='j';
    b64Table[0x24]='k';
    b64Table[0x25]='l';
    b64Table[0x26]='m';
    b64Table[0x27]='n';
    b64Table[0x28]='o';
    b64Table[0x29]='p';
    b64Table[0x2A]='q';
    b64Table[0x2B]='r';
    b64Table[0x2C]='s';
    b64Table[0x2D]='t';
    b64Table[0x2E]='u';
    b64Table[0x2F]='v';
    b64Table[0x30]='w';
    b64Table[0x31]='x';
    b64Table[0x32]='y';
    b64Table[0x33]='z';
    b64Table[0x34]='0';
    b64Table[0x35]='1';
    b64Table[0x36]='2';
    b64Table[0x37]='3';
    b64Table[0x38]='4';
    b64Table[0x39]='5';
    b64Table[0x3A]='6';
    b64Table[0x3B]='7';
    b64Table[0x3C]='8';
    b64Table[0x3D]='9';
    b64Table[0x3E]='+';
    b64Table[0x3F]='/';
    b64Table[0x40]='='; // Padding
}

void base64::parseData(std::vector<byte> & barr, uint len)
{
    std::vector<byte> tmpVect;


    auto initIter=barr.begin();

    while (len>=3)
    {
        unsigned long buffer=0b00000000000000000000000000000000;

        //tmpVect.push_back(*initIter);


        ++initIter;
        //tmpVect.push_back(*initIter);

        ++initIter;
       // tmpVect.push_back(*initIter);
        ++initIter;

        len=len-3;
        buffer = *(initIter-3);
        buffer=(buffer<<8)| *(initIter-2);
        buffer=(buffer<<8)| *(initIter-1);

        std::bitset<24> bbuf(buffer);
        std::string str = bbuf.to_string();
        std::bitset<6>val1( str.substr(0,bbuf.size()-18));
        std::bitset<6>val2( str.substr(6,bbuf.size()-12));
        std::bitset<6>val3(str.substr(12,bbuf.size()-6));
        std::bitset<6>val4(str.substr(18,bbuf.size()));


        tmpVect.push_back(static_cast<byte>(val1.to_ulong()));
        tmpVect.push_back(static_cast<byte>(val2.to_ulong()));
        tmpVect.push_back(static_cast<byte>(val3.to_ulong()));
        tmpVect.push_back( static_cast<byte>(val4.to_ulong()));

//        val1.set(6,0);
//        val1.set(7,0);


//        val2.set(6,0);
//        val2.set(7,0);


//        val3.set(6,0);
//        val3.set(7,0);


//        val4.set(6,0);
//        val4.set(7,0);

        std::cout<<std::bitset<8>(tmpVect[0])<<" "<<std::bitset<8>(tmpVect[1])<<" "<<std::bitset<8>(tmpVect[2])<<" "<<std::bitset<8>(tmpVect[3])<<std::endl;
    }
    if(len==2)
    {
        tmpVect.push_back(0x40);
        tmpVect.push_back(0x40);
        len=len-2;
    }
    else if(len==1)
    {
        tmpVect.push_back(0x40);
        len=len-1;

    }

    barr=tmpVect;

    for(auto &b : barr)
    {
        std::cout << std::bitset<8>(b)<<'\n';
    }

}

void base64::encode(std::vector<byte>& barr)
{
    std::vector<byte>tmpVect;

    for(auto &b : barr)
    {
        byte tmp = b64Table.find(b)->second;
        //tmpVect.push_back(tmp);
        b=tmp;
    }
//    barr.begin()=tmpVect.begin();
//    barr.end()=tmpVect.end();


}

void base64::decode()
{

}
