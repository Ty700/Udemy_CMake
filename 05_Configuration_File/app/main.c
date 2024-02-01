#include <stdio.h>

#include "my_lib.h"
#include "config.hpp"

int main(void){

    printf("Project Name: %s\nVersion: %s\n", project_name, project_version);
    print_hello_world();
}