#include <string>
#include <ostream>
#include <iostream>
#include <vector>
#include <sstream>

class Code
{
private:
    std::string class_name;
    std::vector<std::pair<std::string, std::string>> fields;

    friend class CodeBuilder;
};

class CodeBuilder
{
private:
    Code instance;
public:
    static const size_t indent_size = 2;
    explicit CodeBuilder(const std::string& class_name)
    {
        instance.class_name = class_name;
    }

    CodeBuilder& add_field(const std::string& name, const std::string& type)
    {
        instance.fields.emplace_back(name, type);
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const CodeBuilder& obj)
    {
        os << "class " << obj.instance.class_name << "\n{" << std::endl;
        for (auto&[name, type] : obj.instance.fields) {
            os << std::string(indent_size, ' ') << type << " " << name << ";" << std::endl;
        }
        os << "};";
        return os;
    }
};

/*
int main() {
    auto cb = CodeBuilder{"Person"}.add_field("name", "string").add_field("age", "int");
    std::cout << cb;
}
*/