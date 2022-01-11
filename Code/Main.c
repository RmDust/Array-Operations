
#include <stdio.h>
#include <stdlib.h>


/*
 *         {  0  ,  1  ,  3  ,  5  ,  7  } 
 *  
 *         若要插入 2
 *         设 N = {  2  } 
 *         前后按逻辑划分为 
 *                A = {  0  ,  1  }
 *         和 
 *                B = {  3  ,  5  ,  7  }
 * 
 * 
 */






int main(void) { 
        int List[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        int Element;
        int In = 0;
        
        // Putin element.
        // 键盘输入一个数 
        scanf("%d", &Element); 
        
         
        // Insert an element in a List.
        // 这个 Result 是最终结果
        int* Result = (int*) malloc(sizeof(List)+4);
        
        
        // 寻找 键盘输入值 应该插入的位置 
        for(size_t Index = 0; Index < sizeof(List) / sizeof(List[0]); Index += 1) {
               if(Element >= List[Index]) {
                       In = Index + 1;
               } 
        }
        
        
        // 开始插入 
        for(size_t Index = 0, Addins = 0; Index < sizeof(List) / sizeof(List[0]) + 1; Index += 1) {
                if(Index < In){
                        Result[Index] = List[Index];
                        continue;
                } else if(Index == In) {
                        Result[Index] = Element;
                        Addins = -1;
                        continue;
                }
                
                Result[Index] = List[Index + Addins];
        }
        
        
        // 输出最终结果 
        for(size_t Index = 0; Index < sizeof(List) / sizeof(List[0]) + 1; Index += 1) {
               printf("%d ", Result[Index]);
        }
        
        
        return 0;
}
