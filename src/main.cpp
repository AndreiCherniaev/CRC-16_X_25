#include <cstdio>
#include "boost/crc.hpp"

typedef boost::crc_optimal<16, 0x1021, 0xffff, 0xffff, true, true> crc_16_X25;

int main(int argc, char *argv[]){
    const uint8_t arr[3]= {0xAA, 0xBB};
    crc_16_X25 crc{};
    crc.process_block(arr, &(arr[sizeof(arr)-1]));

    printf("0x%04lX", crc.checksum());
}
