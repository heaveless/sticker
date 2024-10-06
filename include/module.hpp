#ifndef STICKER_MODULE_FACTORY_HPP
#define STICKER_MODULE_FACTORY_HPP

class IModuleFactory {
  public:
    virtual void onInitialize() const = 0;
};

#endif
