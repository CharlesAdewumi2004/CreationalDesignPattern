#ifndef PATTERNS_SINGLETON_MAZEFACTORYSINGLETON_H
#define PATTERNS_SINGLETON_MAZEFACTORYSINGLETON_H

#include "patterns/abstract_factory/MazeFactory.h"

// Singleton variant of MazeFactory: only one instance exists program-wide.
class MazeFactorySingleton : public MazeFactory {
public:
    static MazeFactorySingleton* Instance();

protected:
    MazeFactorySingleton() = default;

private:
    static MazeFactorySingleton* _instance;
    // TODO: pick a storage strategy (raw pointer + lazy init,
    //       Meyer's static-local singleton, etc.) and adapt this.
};

#endif
