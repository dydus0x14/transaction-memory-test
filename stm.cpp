//  stm.cpp
//
//  Created by Anton Davydov on 24/11/2016.
//  Copyright © 2016 dydus. All rights reserved.
//

#include <iostream>
#include <pthread.h>
#include <string>
#include <math.h>

using namespace std;
#define NUM_THREADS 2000

double result = 0;
int iteration = 0;
void pi(double i) {
	double iter = pow(16.0, -i) * ( 4.0 / (8.0*i + 1.0) - 2.0 / (8.0*i + 4.0) - 1.0 / (8.0*i + 5.0) - 1.0 / (8.0*i + 6.0));
	__transaction_atomic {
		result += iter;
		iteration++;
    }
}

void *worker(void *threadId) {
	long id = (long)threadId;
	pi(id);
	pthread_exit(NULL);
}

int main(int argc, const char * argv[]) {
	
	pthread_t threads[NUM_THREADS];
	pthread_attr_t attr;
	pthread_attr_init(&attr);
   	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

	for (int i=0; i < NUM_THREADS; i++) {
    	int rc = pthread_create(&threads[i], &attr, worker, (void *)i);
    	if (rc) {
    		// cout << "Error while creating thread" << endl;
    	}
  	}
	
	pthread_attr_destroy(&attr);
   	
   	for (int i=0; i < NUM_THREADS; i++) {
		int rc = pthread_join(threads[i], NULL);
		if (rc) {
			// cout << "Error while joining thread" << endl;
		}
   	}
   	cout << "Result: " << result <<endl;
   	cout << "Amount of operations: " << iteration << endl;
}
