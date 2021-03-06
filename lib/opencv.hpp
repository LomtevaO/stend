#ifndef _OPENCV_HPP
#define _OPENCV_HPP

#include "all.hpp"
#include "lib/lua.hpp"
#include "lib/image.hpp"

void opencv_register(lua_State * state);

int lua_imread(lua_State * state); // TODO
int lua_imwrite(lua_State * state); // TODO
int lua_delete(lua_State * state);
int lua_threshold(lua_State * state);
int lua_split(lua_State * state);
int lua_merge(lua_State * state);
int lua_bitwise_and(lua_State * state);

#endif

