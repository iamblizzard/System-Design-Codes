#include "SingletonPatternEager.h"

SingletonPatternEager* SingletonPatternEager::instance = new SingletonPatternEager();

SingletonPatternEager* SingletonPatternEager::getInstance() {
    return instance;
}