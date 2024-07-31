#include <cwapi3d/CwAPI3D.h>
#include "ElementWrapper.h"
#include <stdexcept>
#include <format>
#include <locale>
#include <codecvt>

CWAPI3D_PLUGIN bool plugin_x64_init(CwAPI3D::ControllerFactory *aFactory);

bool plugin_x64_init(CwAPI3D::ControllerFactory *aFactory)
{
    const auto elementIds = aFactory->getElementController()->getActiveIdentifiableElementIDs();

    if (elementIds->count() == 0)
    {
        aFactory->getUtilityController()->printToConsole(L"No element selected");
        return false;
    }

    try
    {
        // https://en.cppreference.com/w/cpp/locale/codecvt_utf8_utf16
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
        for (auto il{0}; il < elementIds->count(); il++)
        {
            const auto elementId = elementIds->at(il);
            const auto elementWrapper = cadwork::plugin::ElementWrapper(elementId, aFactory->getAttributeController());
            const auto elementName = elementWrapper.getName();
            const auto elementNameW = converter.from_bytes(elementName);
            aFactory->getUtilityController()->printToConsole(std::format(L"Element name: {}", elementNameW).data());
        }
    }
    catch (const std::invalid_argument &e)
    {
        aFactory->getUtilityController()->printToConsole(L"Error in ElementWrapper");
    }

    return true;
}