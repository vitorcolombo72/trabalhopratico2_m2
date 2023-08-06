#include <stdio.h>

int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize){
    int temp;
    int cont = 0;
    int l = 0;
    //variaveis da queue
    int front = 0;
    //variaveis da stack
    int top = 0;
    while ( l <= studentsSize-front ) {
        if ( students[front] == sandwiches[top] ) {
            front++;
            top++;
            cont++;
            l = 0;
        } else {
            l++;
            temp = students[front];
            for( int i = front; i < studentsSize ; i++ ){
                students[i] = students[i + 1];
            }    
        students[studentsSize - 1] = temp;
        }
    }
    return studentsSize - cont;
}


int main(int argc, char const *argv[])
{
    int i;
    int es[6] = {1,1,1,0,0,1};
    int s[6] = {1,0,0,0,1,1};
    int a = countStudents(es,6,s,6);
    printf("a: %d",a);

    return 0;
}
