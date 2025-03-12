#include <stdio.h>

unsigned char Array[20];

void SendData(unsigned char* Data, unsigned int Num) {
    for (unsigned int i = 0; i < Num; i++) {
        Array[i] = Data[i];
    }
}

void ReceiveData(unsigned char* Data, unsigned int Num) {
    for (unsigned int i = 0; i < Num; i++) {
        Data[i] = Array[i];
    }
}

int main() {
    float Data = 10.23;
    unsigned char DataReceive[4];
    unsigned char* p;
    p = ((unsigned char*)(&Data));

    SendData(p, 4);
    ReceiveData(DataReceive, 4);
    float* Rp;
    Rp = (float*)DataReceive;
    printf("ReceiveData:%f", *Rp);
    return 0;
}