#ifndef GODOT_MOUSE_H
#define GODOT_MOUSE_H

#include <godot_cpp/classes/node.hpp>

namespace godot{

class Mouse : public Node{
    GDCLASS(Mouse, Node)
private:
    Vector2 position;
protected:
    static void _bind_methods();
public:
    Mouse();
    ~Mouse();

    void _ready();
    void _process(double delta);

    Vector2 get_position() const;
};

}

#endif GODOT_MOUSE_H
