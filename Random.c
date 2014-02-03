double Random(){
    static unsigned long ix = 0;
    ix = (ix * a + b) % M;
    return ix / (double)M;
}