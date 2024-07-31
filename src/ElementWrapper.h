#include <cwapi3d/CwAPI3D.h>

namespace cadwork::plugin
{
    class ElementWrapper
    {
    private:
        CwAPI3D::elementID id;
        
        CwAPI3D::AttributeController* attributeController{nullptr};

    public:
        explicit ElementWrapper(CwAPI3D::elementID id, CwAPI3D::AttributeController* attributeController);

        ~ElementWrapper() = default;

        std::string getName() const;
    };

}