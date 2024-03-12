
#include "entity.hpp"

namespace Factory {

    /**
     * 
     * MoveableEntity class
     * This is the base class for all entities that can move.
     * 
     * This class is the base class for all entities that can move.
     * 
     * 
    */
    class MoveableEntity : IEntity {

        public:
            MoveableEntity();
            virtual ~MoveableEntity();

            void get_position() const; // Get the position of the item ( const means that the function can't change the )
            void set_position(raylib::Vector2); // Set the position of the item

        private:

            raylib::Vector2 position; // The position of the item

    };

}