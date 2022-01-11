
#include <stdio.h>

int main(void) { 
        int List[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        int Element;
        int In = 0;
        
        // Putin element.
        scanf("%d", &Element); 
        
         
        // Insert an element in a List.
        int* Result = (int*) malloc(sizeof(List)+4);
        
        for(size_t Index = 0; Index < sizeof(List) / sizeof(List[0]); Index += 1) {
               if(Element >= List[Index]) {
                       In = Index + 1;
               } 
        }
        

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
        
        
        for(size_t Index = 0; Index < sizeof(List) / sizeof(List[0]) + 1; Index += 1) {
               printf("%d ", Result[Index]);
        }
        
        
        return 0;
}
