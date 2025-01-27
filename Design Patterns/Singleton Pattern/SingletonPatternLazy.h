#ifndef SINGLETON_PATTERN_LAZY_H
#define SINGLETON_PATTERN_LAZY_H

#include <mutex>

class SingletonPatternLazy {
private:
    // Static pointer to the Singleton instance
    static SingletonPatternLazy* instance;

    // Mutex to ensure thread safety in multithreaded environment.
    static std::mutex mtx;

    // Private constructor to prevent instantiation
    SingletonPatternLazy() = default;

public:
    // Deleting the copy constructor to prevent copies
    SingletonPatternLazy(const SingletonPatternLazy& obj) = delete;

    // Static method to get the Singleton instance
    static SingletonPatternLazy* getInstance();
};

#endif // SINGLETON_PATTERN_LAZY_H