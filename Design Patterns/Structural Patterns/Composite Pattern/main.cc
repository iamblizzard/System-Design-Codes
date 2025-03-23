#include "file-system.h"

#include <iostream>

int main () {
    Directory* root = new Directory("root");
    root->add(new File("root-level file"));

    Directory* home = new Directory("home");
    home->add(new File("home-level file"));

    Directory* user = new Directory("user");
    user->add(new File("user-level file1"));
    user->add(new File("user-level file2"));
    user->add(new File("user-level file3"));
    
    root->add(home);
    home->add(user);
    
    root->display();
    // user->display();
}