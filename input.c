/* 
* @Author: wcg
* @Date:   2015-06-10 10:10:44
* @Last Modified by:   anchen
<<<<<<< HEAD
* @Last Modified time: 2015-06-10 11:16:31
=======
* @Last Modified time: 2015-06-10 10:59:36
>>>>>>> iss1
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
    printf("conlict made in iss1 branch")
    return 10;
}

//fix iss1
int fix（）{
    return 1;
}