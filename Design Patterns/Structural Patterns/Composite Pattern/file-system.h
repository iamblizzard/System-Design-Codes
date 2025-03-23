#ifndef FILE_SYSTEM_H_
#define FILE_SYSTEM_H_

#include <string>
#include <vector>

class FileSystemComponent {
public:
    virtual void display() = 0;
};

class File : public FileSystemComponent {
public:
    File(std::string name) : name_(name) {}
    void display() override;
private:
    std::string name_;
};

class Directory : public FileSystemComponent {
public:
    Directory(std::string name) : name_(name) {}
    void add(FileSystemComponent* component);
    void display() override;
private:
    std::string name_;
    std::vector<FileSystemComponent*> children_;
};

#endif // FILE_SYSTEM_H_