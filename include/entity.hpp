
namespace Factory {

    /**
     * 
     * Entity super class.
     * All things that are have functionality are entities.
     * 
     * This class is the base class for all entities.
     * 
     * This is essentiall the entity and system part of the ECS.
     * 
     * 
    */
    class IEntity {

        public:
            IEntity();
            virtual ~IEntity();

            virtual void update(); // Update the entity
            virtual void render(); // Render the entity

    };

}