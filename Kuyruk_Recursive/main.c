#include <stdio.h>
void kuyruk(int sayi){
    if(sayi<1){
        return;
    } else{
        printf("%d ",sayi);
        kuyruk(sayi-1);
        return;
    }
}
int main() {
    kuyruk(5);
    return 0;
}
