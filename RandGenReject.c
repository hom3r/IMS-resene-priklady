double f(double x) { // funkce hustoty
    if(0.0 <= x && x < 2.0)
        return x / 2.0;
    else
        return 0.0;
}
double RandGenReject() {
    double x,y;
    do {
        x = Random()*2;
        y = Random()*1;
    } while (y > f(x)); // trefili jsme se nad funkci hustoty -> znovu
    return x;
}