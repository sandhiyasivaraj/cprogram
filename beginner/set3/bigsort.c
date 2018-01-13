char** bigSorting(int arr_size, char** arr, int *result_size) {
    
}

int main() {
    int n; 
    scanf("%i", &n);
    char* *arr = malloc(sizeof(char*) * n);
    for (int arr_i = 0; arr_i < n; arr_i++) {
       arr[arr_i] = (char *)malloc(10240 * sizeof(char));
       scanf("%s",arr[arr_i]);
    }
    int result_size;
    char** result = bigSorting(n, arr, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%s", result[result_i]);
    }
    puts("");


    return 0;
}
