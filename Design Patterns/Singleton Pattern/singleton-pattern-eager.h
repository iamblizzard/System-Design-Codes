#ifndef SINGLETON_PATTERN_EAGER_H
#define SINGLETON_PATTERN_EAGER_H

class SingletonPatternEager {
private:
    // Static pointer to the Singleton instance
    static SingletonPatternEager* instance;

    // Private constructor to prevent instantiation
    SingletonPatternEager() = default;

public:
    // Deleting the copy constructor to prevent copies
    SingletonPatternEager(const SingletonPatternEager& obj) = delete;

    // Static method to get the Singleton instance
    static SingletonPatternEager* getInstance();
};

#endif // SINGLETON_PATTERN_EAGER_H