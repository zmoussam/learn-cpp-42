#ifndef __INDONESIAN__
    #define __INDONESIAN__
    #include"someone.hpp"
    #include <string>

    class Indonesian : public Someone
    {
        using Someone::Someone;

        public:
            void sayGoodNight() const noexcept override;
    };
    
#endif