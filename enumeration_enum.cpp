#include<stdio.h> 
enum week{Mon, Tue, Wed, Thu, Fri, Sat, Sun}; 
int main() 
{ 
    enum week day; 
    day = Wed; 
    printf("%d",day); 
    return 0; 
}  
