// enemy.h
#ifndef ENEMY_H
#define ENEMY_H
#include <string>

class Enemy
{ 
    protected:
        std::string name_;
    private:
        int lives_;
    public:
        Enemy(const std::string &name, int lives);
        virtual ~Enemy();

        virtual void talk() const = 0;
        virtual void attack() const = 0;
        void takeDamage(int damage);
        int getLives() const;
        bool isDead() const;
};

class Koopa : public Enemy
{
    public:
        Koopa(const std::string &name, int lives);
        ~Koopa();

        void talk() const override;

        void attack() const override;
};

class Goomba : public Enemy
{
    public:
        Goomba(const std::string &name, int lives);
        ~Goomba();

        void talk() const override;

        void attack() const override;
};

class Bowser : public Enemy {
    public:
        Bowser(const std::string &name, int lives);
        ~Bowser();

        void talk() const override;
        void attack() const override;
};

#endif