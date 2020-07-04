string catAndMouse(int x, int y, int z) {
    int resultCatA = (z - x < 0) ? (z - x)* -1 : (z - x);
    int resultCatB = (z - y < 0) ? (z - y)* -1 : (z - y);
    string finalresult = (resultCatA < resultCatB) ? "Cat A" : (resultCatA - resultCatB == 0) ? "Mouse C" : "Cat B";
    return finalresult;

}
