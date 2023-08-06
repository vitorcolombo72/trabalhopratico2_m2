#include <stdio.h>
int *andaFila(int *v, int size){
    int orig[size];
    for(int i = 0; i < size; i++){
        orig[i] = v[i];
    }

    for(int i = 0;i < size;i++){
        if(i == size-1){
            v[i] = orig[0];
        }else{
            v[i] = orig[i+1];
        }
    }
    return v;

}

int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize){
    int c = 0;
    for(int i = 0;i<studentsSize;i++){
        if(students[0] == sandwiches[0+c]){
            c++;
        }
        else{
            students = andaFila(students,studentsSize);
        }
        if(c == studentsSize){
            printf("xi");
            
        }
    }
    for(int i = 0;i<studentsSize;i++){
    printf("%d",students[i]);
    }

    if(c == 1)
    return 0;
    
    return c;



}


int main(int argc, char const *argv[])
{
    int i;
    int es[4] = {1,1,0,0};
    int s[4] = {0,1,0,1};
    int a = countStudents(es,4,s,4);
    printf("a: %d",a);
    return 0;
}
