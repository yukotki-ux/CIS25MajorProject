This class has the information about family members' preference and satisfaction.

class FamilyMember {
    private:
        string name;
        int satisfaction;
        string preference;

    public:
        string getName();
        void updateSatisfaction(int amount); //check if the remodeling matches their preference

    }