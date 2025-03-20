#include "Mouse.h"

#include <godot_cpp/classes/viewport.hpp>

using namespace godot;

void Mouse::_bind_methods(){
    ClassDB::bind_method(D_METHOD("get_position"), &Mouse::get_position);
}

Mouse::Mouse():
    position(Vector2(0, 0)){

}

Mouse::~Mouse(){

}

void Mouse::_ready(){

}

void Mouse::_process(double delta){
    position = get_viewport()->get_mouse_position();
}

Vector2 Mouse::get_position() const{
    return position;
}