void Step_RK4(double t,double st[],double in[],unsigned N,double h){
    double startSt[N], k1[N], k2[N], k3[N], k4[N];
    
    for(unsigned i=0; i<N; i++){
        startSt[i] = st[i];
    }
    
    Dynamic(t, st, in, N);
    for(unsigned i=0; i<N; i++){
        k1[i] = h * in[i];
        st[i] = startSt[i] + k1[i]/2;
    }
    
    Dynamic(t+h/2, st, in, N);
    for(unsigned i=0; i<N; i++){
        k2[i] = h * in[i];
        st[i] = startSt[i] + k2[i]/2;
    }
    
    Dynamic(t+h/2, st, in, N);
    for(unsigned i=0; i<N; i++){
        k3[i] = h * in[i];
        st[i] = startSt[i] + k3[i];
    }
    
    Dynamic(t+h, st, in, N);
    for(unsigned i=0; i<N; i++){
        k4[i] = h * in[i];
        st[i] = startSt[i] + k1[i]/6 + k2[i]/3 + k3[i]/3 + k4[i]/6;
    }
}
