#ifndef ILE_H
#define ILE_H


class ILE
{
    public:
        ILE();
        ~ILE();

        void setType();
        bool getType();

        void  getTabRessource() ;
        Objet getTabRessource() ;

        void  setTabMagasin() ;
        Objet getTabMagasin() ;

        void setTabArmurerie() ;
        Objet getTabArmurerie() ;

    private:

        bool type;
        vector <Objet> tabRessource ;
        vector <Objet> tabMagasin ;
        vector <Objet> tabArmurerie ;
};

#endif // ILE_H
