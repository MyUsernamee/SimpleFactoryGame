#include "world.hpp"
#include "player.hpp"

namespace Game {

    /**
     * This is the game class.
     * All global state is held here.
     * 
     * All functions to interact with the game and game rendering happens here.
    */
    class Game {

        public:
            Game();
            virtual ~Game();

            void start_game(); // Start the game

            void update(); // Update the game
            void render(); // Render the game

        private:

            Factory::Player player; // The player
            Factory::World world; // The world

    }

}