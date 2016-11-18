//
//  main.cpp
//  smp_test
//
//  Created by Anton Davydov on 18/11/2016.
//  Copyright © 2016 dydus. All rights reserved.
//

#include <iostream>
#include "stm.h"
#include <thread>
#include <string>

//using namespace std;
//int counter = 0;

//typedef void (* func_t)() ; //__attribute__((transaction_safe));

//static __attribute__((transaction_safe))
void t() {
//    counter++;
//    std::cout<< "Ebana" << std::endl;
}

//void task1(string msg)
//{
////    for (int i = 0; i < 100; i++)
//        
//}

int main(int argc, const char * argv[]) {
    testSTM(t);
//    thread t1(task1, "t1");
//    thread t2(task1, "t2");
//    thread t3(task1, "t3");
//    thread t4(task1, "t4");
//    thread t5(task1, "t5");
//    thread t6(task1, "t6");
//    thread t7(task1, "t7");
//    thread t8(task1, "t8");
//    thread t9(task1, "t9");
//    thread t10(task1, "t10");
//    
//    t1.join();
//    t2.join();
//    t3.join();
//    t4.join();
//    t5.join();
//    t6.join();
//    t7.join();
//    t8.join();
//    t9.join();
//    t10.join();
//    
    return 0;
}


