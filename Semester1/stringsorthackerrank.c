#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    // printf("in lexico");
    return strcmp(a,b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    // printf("in revlexico");
    return strcmp(b,a);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    // printf("in dist");
    int n = strlen(a);
    int count1=0;
    int count2=0;
     for(int i=0; i<n; i++){
        int flag=0;
        for(int j=0; j<i; j++){
            if(a[i]==a[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count1++;
        } 
    }
    n=strlen(b);
    for(int i=0; i<n; i++){
        int flag=0;
        for(int j=0; j<i; j++){
            if(b[i]==b[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count2++;
        } 
    }
    if (count1>count2){
        return 1;
    }
    else if(count1==count2){
        return lexicographic_sort(a,b);
    }
    else {
        return 0;
    }
}

int sort_by_length(const char* a, const char* b) {
    // printf("in length");
    if (strlen(a)>strlen(b)){
        return 1;
    }
    else {
        return 0;
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    // for (int i=0;i<sizeof(arr)/sizeof(arr[0])-1;i++){
    //     for (int j=0;j<sizeof(arr)/sizeof(arr[0])-i-1;j++){
    //         if(cmp_func(arr[j],arr[j+1])){
    //             q
    //         }
    //     }
    // }
    qsort(arr,len,sizeof(const char *),cmp_func);
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}