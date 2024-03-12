#include <raylib-cpp.hpp>
#include <inventory.hpp>

#pragma once

namespace Factory {

    /**
     * Player Class
     * Store all info about the player and the player's actions
     * 
     * All player actions and interactions are held here.
     * Info is held as well such as money, inventory, and other things.
    */
    class Player {

        public:
            Player();
            virtual ~Player();

            raylib::Vector2 get_cursor_position() const;
            Factory::Slot get_hand_slot() const;

            void

    }
    
}