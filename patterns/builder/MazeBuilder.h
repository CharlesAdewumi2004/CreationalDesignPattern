#ifndef PATTERNS_BUILDER_MAZEBUILDER_H
#define PATTERNS_BUILDER_MAZEBUILDER_H

class Maze;

class MazeBuilder {
public:
    virtual ~MazeBuilder() = default;

    virtual void BuildMaze() {}
    virtual void BuildRoom(int room) {}
    virtual void BuildDoor(int roomFrom, int roomTo) {}

    virtual Maze* GetMaze() { return nullptr; }

protected:
    MazeBuilder() = default;
};

// TODO: implement StandardMazeBuilder (actually constructs the maze)
//       and CountingMazeBuilder (counts rooms/doors without building).
// TODO: add MazeGame::CreateMaze(MazeBuilder&) that drives the builder.

#endif
