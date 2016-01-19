double Random(){
    static unsigned long ix = SEED;
    ix = (ix * a + b) % M;
    return ix / (double)M;
}
