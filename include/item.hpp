#include <raylib-cpp.hpp>
#include "entity.hpp"

#pragma once

namespace Factory {

    /**
    * LooseItem Class
    *   
    * @brief This class is the base class for all loose items. (Items that are moveable)
    * 
    * All Items are essentially movable objects and things that can be stored in containers.
    * These can be moved and aren't stuck to the grid.
    * 
    **/
    class LooseItem: IEntity {

        public:
            Item();
            virtual ~Item();

            void get_position() const; // Get the position of the item ( const means that the function can't change the )
            void set_position(raylib::Vector2); // Set the position of the item

        private:

            raylib::Vector2 position; // The position of the item
            Factory::ItemClass item_class; // The class of the item


    };

    struct ItemClass {

        std::string class_name;
        std::string class_description;
        int max_stack_size;

    }

}