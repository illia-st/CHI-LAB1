#pragma once
#include <string>
#include <cstdint>
#include <vector>


namespace l1{
    class Txt{
    public:
        Txt() = default;
        virtual ~Txt() = default;
        Txt(const std::string& file_path);
        Txt(const Txt& obj);
        Txt(Txt&& obj) noexcept;
        Txt& operator = (Txt&& obj) noexcept;
        Txt& operator = (const Txt& obj);
        size_t size() const;
    private:
        std::vector<std::string> rows;
    };
}