#ifndef PATTERNS_SINGLETON_MAZEFACTORYSINGLETON_H
#define PATTERNS_SINGLETON_MAZEFACTORYSINGLETON_H

#include <memory>
#include "patterns/abstract_factory/MazeFactory.h"

// Singleton variant of MazeFactory: only one instance exists program-wide.
class MazeFactorySingleton : public MazeFactory {
public:
    static std::shared_ptr<MazeFactorySingleton> Instance();

protected:
    MazeFactorySingleton() = default;

private:
    static std::shared_ptr<MazeFactorySingleton> _instance;
};

#endif
