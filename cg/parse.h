//
//  parse.h
//  cg
//
//  Created by GuShenlong on 2/15/16.
//  Copyright © 2016 slgu. All rights reserved.
//

#ifndef parse_h
#define parse_h
//#define IM_DEBUGGING

#include "scene.h"
class Parser {
public:
    //parse scene file
    void parse_scene_file (char *filnam, std::shared_ptr <Scene> & scene);
    //parse obj file
    void parse_obj_file (const char * fillnam, std::vector< int > &tris, std::vector< float > &verts);
};

#endif /* parse_h */
