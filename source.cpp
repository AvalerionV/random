#include<iostream>
using namespace std;

void seed(char arr[], int size) {
    for(int i = 0; i<=size; i++) {
        for(int j = i; j<=size; j++) {
            char tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tmp;
        }
        
    }
}

void generateRandom(int n, int spun) {
    char arr[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'};
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i<=spun; i++) {
        seed(arr, sizeOfArr); // let's make it unique baby
    }
    for(int k = 0; k<=n; k++) {
        cout << arr[k];
    }
}

int main() {
    generateRandom(64, 1024);
}
