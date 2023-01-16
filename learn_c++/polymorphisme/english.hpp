#ifndef __ENGLISH__
    #define __ENGLISH__
    #include"someone.hpp"
    #include <string>

    class English : public Someone
    {
        using Someone::Someone;

        public:
            void sayGoodNight() const noexcept override;
    };
    
#endif