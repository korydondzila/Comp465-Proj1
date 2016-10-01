#ifndef CELESTIAL_BODY_H
#define CELESTIAL_BODY_H

#include "MoveableEntity.hpp"

class CelestialBody : public MoveableEntity
{
    private :
		CelestialBody* m_eParent; // If we're orbiting another body, which one?
		glm::vec3 m_vParentOldPosition; // Parent's previous position
        float m_fRotationRate; // Rate in seconds for full rotation
		glm::mat3 m_mRotation; // Axis rotation matrix
		float m_fOrbitDistance; // Orbit distance from parent
        float m_fOrbitRate; // Rate in seconds for full orbit
        glm::vec3 m_vOrbitAxis; // Orbital axis
		glm::mat3 m_mOrbit; // Orbit rotation matrix
        
    public :
		CelestialBody(Model* model, CelestialBody* parent = NULL, const glm::vec3& pos = glm::vec3(0.0f),
			const glm::vec3& scale = glm::vec3(1.0f), const glm::vec3& target = glm::vec3(0.0f, 0.0f, -1.0f),
			const glm::vec3& up = glm::vec3(0.0f, 1.0f, 0.0f), float rotationRate = 0.0f, float orbitRate = 0.0f,
			const glm::vec3& orbitAxis = glm::vec3(0.0f, 1.0f, 0.0f));

        virtual ~CelestialBody() {}
        void Update();
		void UpdateTimeDelay();
		void SetPosition(const glm::vec3& position);
		void SetPosition(float x, float y, float z) { SetPosition(glm::vec3(x, y, z)); }
};

#endif
