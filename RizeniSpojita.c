inicializace poc. stavu a promennych a casu;
while (cas < koncovy_cas) {
    Print_results();
    Update_integrators();
    if (cas + krok > koncovy_cas)
        krok = koncovy_cas - cas;
    euler();
    cas += krok;
}