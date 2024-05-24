#include <stdio.h>

int getHeight();
int getInt();
void printPyramid(int height, int maxHeight);

int main(){
    int height = getHeight();
    printPyramid(height, height);
    return 0;
}

void printPyramid(int height, int maxHeight){
    if (height <= 0){
        return;
    }
    printPyramid(height -1, maxHeight);
    for (int j = maxHeight - height; j > 0; j--){
        printf(" ");
    }
    for (int i = 0; i < height; i++){
        printf("#");
        }
        printf("  ");
    for (int i = 0; i < height; i++){
        printf("#");
    }
    printf("\n");
}

int getHeight(){
    int height;
    do{
        height = getInt();
    }while (height < 1 || height > 9);
    return height;
}



int getInt(){
    int number;
    int result;

    printf("Please enter an integer whitin 1 and 9: ");
    result = scanf("%d", &number);

    while (result != 1) {
        // Clear the input buffer
        while (getchar() != '\n');
        printf("Please enter an integer whitin 1 and 9: ");
        result = scanf("%d", &number);
    }
    return number;
}