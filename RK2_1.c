void Run(double t1, double t2){
    unsigned N = 2;
    double st[N], in[N], stepSize = 0.1;
    InitModel(st, N);
    for(double t=t1; t < t2; t+=stepSize){
        if(t + stepSize > t2) stepSize = t2 - t; // dokrocime
        printf("%lf %lf %lf\n", t, st[0], st[1]); // vypis
        Step_RK2(t, st, in, N, stepSize); // vypocet dalsiho stavu
    }
}