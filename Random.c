double Random(){
    static unsigned long ix = 0;
    ix = A*ix+B; // <0,ULONG_MAX>
    return ix / ((double)ULONG_MAX + 1); // <0,1)
}