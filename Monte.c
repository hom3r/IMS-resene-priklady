double MCIntegral(){
    // chyba = 1/sqrt(N) -> 1% = 1/sqrt(10000)
    unsigned pokusu = 10000;
    double suma = 0.0;
    for(unsigned i=0; i<pokusu; i++){
        double x[N];
        for(unsigned ii=0; ii<N; ii++){
            x[ii] = Range[ii].min
             + Random() * (Range[ii].max-Range[ii].min);
        }
        suma += f(x,N);
    }
    double refPlocha = 1.0;
    for(unsigned ii=0; ii<N; ii++)
        refPlocha *= Range[ii].max - Range[ii].min;
    return refPlocha * suma/pokusu;
}