#include<stdio.h>
#include<stdlib.h>
// ver.1 2022/11/11
// A function to calculate the Step of HanoiTower
// in a recursive method
int getStepOfHanoiTower(int disk ,char source, char spare ,char target){
    if(disk == 1){
        printf("Move disk 1 from %c to %c\n",source,target);
    }else{
        getStepOfHanoiTower(disk-1,source,target,spare);
        printf("Move disk %d from %c to %c\n",disk,source,target);
        getStepOfHanoiTower(disk-1,spare,source,target);
    }
}
int main(int argc, char const *argv[])
{
    char temp[3];
    fgets(temp,4,stdin);
    int disk = strtol(temp,NULL,10);
    if(disk){
        getStepOfHanoiTower(disk,'A','B','C');
    }else{
        printf("Not an integer.");
    }
    
    return 0;
}
