#include "base64.h"

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

unsigned char *base64::parseData(unsigned char *carr,int len)
{

    len % 3 ?


    for(int i = 0; i < len; ++i)
    {

    }
}

void base64::encode()
{

}

void base64::decode()
{

}
