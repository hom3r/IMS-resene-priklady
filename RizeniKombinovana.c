inicializace poc. stavu a promennych a casu;
while (cas < koncovy_cas) {
  vyber_zaznam_z_kalendare();
  while ( (cas + krok < koncovy_cas) && (cas + krok < aktivacni_cas_pristi_udalosti) ) { //"neprekroceni" udalosti / konce
    krok_numericke_metody();
    cas += krok;
  }
  //v tomhle miste jsme bud kousek pred udalosti (kousek <= normalni_krok), nebo kousek pred koncem simulace
  //cili pred provedenim udalosti / koncem simulace musime udelat jeste jeden krok, ale jeho velikost urcime
  //podle toho, jestli budeme provadet udalost nebo koncit
  if (aktivacni_cas_pristi_udalosti > koncovy_cas)  { //prvni udalost lezi mimo simulaci -> kaslem na ni
    krok = koncovy_cas - cas;
    krok_numericke_metody();
    cas += krok; //nebo: cas = koncovy_cas
    konec_simulace();
  }
  else {
    krok = aktivacni_cas_pristi_udalosti - cas;
    krok_numericke_metody();
    cas += krok; //nebo: cas = aktivacni_cas_pristi_udalosti
    proved_udalost();
    krok = normalni_delka_kroku;
  }
}