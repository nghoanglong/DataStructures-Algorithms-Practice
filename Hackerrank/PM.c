void plusMinus(int arr_count, int* arr) {
    double negative = 0;
    double positive = 0;
    double zero = 0;
    for(int i = 0;i < arr_count;i++){
        if(arr[i] < 0){
            negative++;
        }
        else if(arr[i] > 0){
            positive++;
        }
        else
            zero++;
    }
    printf("%.6lf\n",(double)(positive/arr_count));
    printf("%.6lf\n",(float)(negative/arr_count));
    printf("%.6lf\n",(float)(zero/arr_count));
}