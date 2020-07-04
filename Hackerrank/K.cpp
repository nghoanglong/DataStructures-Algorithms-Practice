string kangaroo(int x1, int v1, int x2, int v2) {
    string result;
    if ((x2 > x1 && v2 < v1) && (x2 - x1) % (v1 - v2) == 0){
        result = "YES";
    }
    else{
        result = "NO";
    }
    return result;

}