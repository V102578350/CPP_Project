
#include "SimpleCounter.h"

SimpleCounter::SimpleCounter() : fCounter(0) {
    
}

SimpleCounter::SimpleCounter(int aInitValue) : fCounter(aInitValue){
}

void SimpleCounter::Increment() {
    fCounter++;
}

void SimpleCounter::Decrement() {
    fCounter--;
}
