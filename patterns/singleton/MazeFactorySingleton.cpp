#include "patterns/singleton/MazeFactorySingleton.h"

std::shared_ptr<MazeFactorySingleton> MazeFactorySingleton::_instance = nullptr;

std::shared_ptr<MazeFactorySingleton> MazeFactorySingleton::Instance() {
    if (!_instance) {
        _instance = std::shared_ptr<MazeFactorySingleton>(new MazeFactorySingleton());
    }
    return _instance;
}
