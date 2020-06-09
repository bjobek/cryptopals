#ifndef BASE64_H
#define BASE64_H
#include <QByteArray>
// Challenge 1, set 1

class base64
{
public:
    base64();

    void encode(QByteArray& barr);
    void decode(QByteArray& barr);



};

#endif // BASE64_H
