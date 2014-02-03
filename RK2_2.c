void Step_RK2(double t, double st[], double in[], unsigned N, double stepSize){
    double startSt[N], k1[N], k2[N];
    for(unsigned i=0; i < N; i++){
        startSt[i] = st[i];
    }
    Dynamic(t, st, in, N);              // in = f(t,y(t))
    for(unsigned i=0; i < N; i++){
        k1[i] = stepSize*in[i];         // k1 = h*f(t,y(t))
        st[i] = startSt[i] + k1[i]/2;   // st = y(t)+k1/2
    }
    Dynamic(t+stepSize/2, st, in, N);   // in = f(t+h/2,y(t)+k1/2))
    for(unsigned i=0; i < N; i++){
        k2[i] = stepSize*in[i];         // k2 = h*f(t+h/2,y(t)+k1/2)
        st[i] = startSt[i] + k2[i];     // y(t+h) = y(t) + k2
    }
}