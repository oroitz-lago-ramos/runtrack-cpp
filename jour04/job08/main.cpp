#include <iostream>
#include <string>
#include <map>
#include <functional>
#include <memory>

// Classe de base Enemy
class Enemy
{
public:
    virtual void attack() const = 0; // Méthode virtuelle pure
    virtual ~Enemy() {}              // Destructeur virtuel
};

// Classe Goblin dérivée de Enemy
class Goblin : public Enemy
{
public:
    void attack() const override
    {
        std::cout << "Goblin attacks with a club!" << std::endl;
    }
};

// Classe Ogre dérivée de Enemy
class Ogre : public Enemy
{
public:
    void attack() const override
    {
        std::cout << "Ogre smashes with a huge hammer!" << std::endl;
    }
};

// Classe Dragon dérivée de Enemy
class Dragon : public Enemy
{
public:
    void attack() const override
    {
        std::cout << "Dragon breathes fire!" << std::endl;
    }
};

// Classe EnemyFactory
class EnemyFactory
{
private:
    // Map de strings vers des fonctions qui retournent des pointeurs uniques vers des Enemy
    std::map<std::string, std::function<std::unique_ptr<Enemy>()>> enemyMap;

public:
    // Constructeur qui initialise la map avec les types d'ennemis disponibles
    EnemyFactory()
    {
        enemyMap["Goblin"] = []() -> std::unique_ptr<Enemy>
        { return std::make_unique<Goblin>(); };
        enemyMap["Ogre"] = []() -> std::unique_ptr<Enemy>
        { return std::make_unique<Ogre>(); };
        enemyMap["Dragon"] = []() -> std::unique_ptr<Enemy>
        { return std::make_unique<Dragon>(); };
    }

    // Méthode createEnemy qui retourne un pointeur unique vers l'ennemi créé
    std::unique_ptr<Enemy> createEnemy(const std::string &enemyType)
    {
        auto it = enemyMap.find(enemyType);
        if (it != enemyMap.end())
        {
            return it->second(); // Appel de la fonction associée pour créer l'ennemi
        }
        else
        {
            return nullptr; // Retourne nullptr si le type d'ennemi n'est pas trouvé
        }
    }
};

int main()
{
    EnemyFactory factory;

    // Créer un Goblin
    auto goblin = factory.createEnemy("Goblin");
    if (goblin)
        goblin->attack();

    // Créer un Ogre
    auto ogre = factory.createEnemy("Ogre");
    if (ogre)
        ogre->attack();

    // Créer un Dragon
    auto dragon = factory.createEnemy("Dragon");
    if (dragon)
        dragon->attack();

    // Essayer de créer un ennemi qui n'existe pas
    auto unknown = factory.createEnemy("Troll");
    if (!unknown)
    {
        std::cout << "Unknown enemy type!" << std::endl;
    }

    return 0;
}
