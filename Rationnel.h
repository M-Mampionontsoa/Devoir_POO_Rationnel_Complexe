class Rationnel
{
    private:
        int numerateur;
        int denominateur;

    public:
        Rationnel(); 
        Rationnel(int num, int den); 
        ~Rationnel(); 
        
        Rationnel somme( Rationnel *autre);
        Rationnel difference( Rationnel *autre);
        
        void displayResult();
};
