#include <stdio.h>
// #include "stm.h"
typedef void (* func_t)() ; //__attribute__((transaction_safe));

void testSTM(func_t func) {
    // __transaction_atomic {
    	func();
    // }
}

void test() {

}

int main(int argc, const char * argv[]) {
    return 0;
}
