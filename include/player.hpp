#include <raylib-cpp.hpp>
#include <inventory.hpp>

namespace Factory {

    class Player {

        public:
            Player();
            virtual ~Player();

            raylib::Vector2 get_cursor_position() const;
            Factory::Slot get_hand_slot() const;

            void

    }
    
}