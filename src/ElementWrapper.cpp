#include "ElementWrapper.h"
#include <stdexcept>

namespace cadwork::plugin
{
    ElementWrapper::ElementWrapper(CwAPI3D::elementID id, CwAPI3D::AttributeController *attributeController)
        : id(id), attributeController(attributeController)
    {
        if (nullptr == attributeController)
        {
            throw std::invalid_argument("AttributeController is nullptr");
        }
    }

    std::string ElementWrapper::getName() const
    {
        return std::string(attributeController->getName(id)->narrowData());
    }
}