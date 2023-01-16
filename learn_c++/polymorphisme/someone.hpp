#ifndef __SOMEONE__
    #define __SOMEONE__
    #include <string>

    class Someone // abstract
    {
        public:
            Someone() = delete;
            Someone(const std::string& name) noexcept;
            virtual void sayGoodNight() const noexcept = 0;

        protected:
            std::string _name;
    };

#endif