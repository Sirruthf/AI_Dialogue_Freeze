#pragma once


class MenuOpenedEventSource : public RE::BSTEventSource<RE::MenuOpenedEvent>
{
public:
    [[nodiscard]] static ObjectLoadedEventSource* GetSingleton()
    {
        ObjectLoadedEventSource singleton;
        return singleton.get();
    }
};