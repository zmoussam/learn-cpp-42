#include"quest.hpp"
#include"unit.hpp"
#include"character.hpp"

int main()
{
    Character c{16, "Jason", 1};
    Unit npc{114, "Forgeron Gibbons"};

    Quest q{"Tourte au sanglier", "Rapporte 5 morceaux de viande", npc.getId()};

    q.show();

    return 0;

}