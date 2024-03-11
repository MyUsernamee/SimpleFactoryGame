#include <vector>
#include "item.hpp"

namespace Factory {

    /**
     * Inventory Class
     * 
     * Simple item storage container class (like a chest or a player's inventory or for machines)
    */
    class Inventory {

        public:
            Inventory();
            virtual ~Inventory();

            

        private:

            int slots = 10; // The number of slots in the inventory
            std::vector<Factory::Slot*> inventory; // The inventory

    };

    /**
     * 
     * Slot Struct
     * 
     * A slot in the inventory, stores an item and a count
     * 
    */
    class Slot {

        public:
            Slot();
            virtual ~Slot();

            std::optional<Factory::ItemClass> get_item()
            int get_count() const;

            void set_item(std::optional<Factory::ItemClass>);
            void set_count(int);

            void take_item(int); // Take a certain amount of items from the slot

        private:

            std::optional<Factory::ItemClass> item; // The item in the slot
            int count;

    };

}