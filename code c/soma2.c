#include <stdio.h>

int main(){
    int nums1[] = {2, 4, 3};
    int nums2[] = {5, 6, 4};
    
    //A soma dos dois números é 807, pois 342 + 465 = 807
    //int = 4 bytes -> 4x3 = 12 bytes / 2 = 6 elementos
    int size = sizeof(nums1) / sizeof(nums1[0]);
    int carry = 0;

    for(int i = 0; i < size; i++){
            int sum = nums1[i] + nums2[i] + carry;
            carry = sum / 10;
            sum = sum % 10;
            printf("%d", sum);
        }
        if(carry > 0){
            printf("%d", carry);
            carry = 0;
        }

        printf("\n");
        return 0;
    }
    
