#include "singleton-pattern-eager.h"

SingletonPatternEager* SingletonPatternEager::instance = new SingletonPatternEager();

SingletonPatternEager* SingletonPatternEager::getInstance() {
    return instance;
}