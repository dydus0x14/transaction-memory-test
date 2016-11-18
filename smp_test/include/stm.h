#ifndef STM_H
#define STM_H

typedef void (* func_t)(void) ; //__attribute__((transaction_safe));

void testSTM(func_t func);

void test();

#endif
