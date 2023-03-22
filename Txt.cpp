#include "Txt.h"
#include <fstream>

namespace l1{
    Txt::Txt(const std::string& file_path){
        std::ifstream file(file_path);
        if(!file){
            return;
        }
        std::string line;
        while(std::getline(file, line)){
            rows.push_back(std::move(line));
        }
    }
    Txt::Txt(const Txt& obj){
        this->rows = obj.rows;
    }
    Txt::Txt(Txt&& obj) noexcept {
        *this = std::move(obj);
    }
    Txt& Txt::operator = (Txt&& obj) noexcept {
        this->rows = std::move(obj.rows);
        return *this;
    }
    // to make the test case work I had to add copy assign
    Txt& Txt::operator = (const Txt& obj){
        this->rows = obj.rows;
        return *this;
    }
    size_t Txt::size() const{
        return rows.size();
    }
}