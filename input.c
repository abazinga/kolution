/* 
* @Author: wcg
* @Date:   2015-06-10 10:10:44
* @Last Modified by:   anchen
* @Last Modified time: 2015-06-10 10:42:04
*/

#include <stdio.h>
#include <string.h>

string getName(){
    printf("input your name please!\n");
    string name;
    scanf("%s",&name);
    return name;
}

// This is for the change in master
int getAll(){
    return 100;
}

// This is for the change in hotfix
int hotfix(){
    return 1;
}