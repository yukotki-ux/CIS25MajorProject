class Budget {
    private:
        int balance;
    
    public:
        int getBudget();
        bool canAfford(int cost);
        void updateBudget(int amount);
    }