// fichier ou est stock des test (pas definitif)

void testBateau()
{
    Bateau bat(50,50,20,10,"le test");

    std::cout << bat.getMaxPv() << '\n';
    std::cout << bat.getPV() << '\n';
    std::cout << bat.getCapacite_cargo() << '\n';
    std::cout << bat.getCapacite_equipage() << '\n';
    std::cout << bat.getNom() << '\n';

    std::cout << "######### on change ########" << '\n';

    bat.setMaxPv(20);
    bat.setPV(19);
    bat.setCapacite_cargo(4);
    bat.setCapacite_equipage(9);
    bat.setNom("tset el");

    std::cout << bat.getMaxPv() << '\n';
    std::cout << bat.getPV() << '\n';
    std::cout << bat.getCapacite_cargo() << '\n';
    std::cout << bat.getCapacite_equipage() << '\n';
    std::cout << bat.getNom() << '\n';
}
