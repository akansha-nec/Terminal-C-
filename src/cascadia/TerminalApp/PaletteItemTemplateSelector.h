// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "PaletteItemTemplateSelector.g.h"
#include "inc/cppwinrt_utils.h"

namespace winrt::TerminalApp::implementation
{
    struct PaletteItemTemplateSelector : PaletteItemTemplateSelectorT<PaletteItemTemplateSelector>
    {
        PaletteItemTemplateSelector() = default;

        Windows::UI::Xaml::DataTemplate SelectTemplateCore(winrt::Windows::Foundation::IInspectable const&, winrt::Windows::UI::Xaml::DependencyObject const&);
        Windows::UI::Xaml::DataTemplate SelectTemplateCore(winrt::Windows::Foundation::IInspectable const&);

        GETSET_PROPERTY(winrt::Windows::UI::Xaml::DataTemplate, TabItemTemplate);
        GETSET_PROPERTY(winrt::Windows::UI::Xaml::DataTemplate, NestedItemTemplate);
        GETSET_PROPERTY(winrt::Windows::UI::Xaml::DataTemplate, GeneralItemTemplate);
    };
}

namespace winrt::TerminalApp::factory_implementation
{
    BASIC_FACTORY(PaletteItemTemplateSelector);
}
