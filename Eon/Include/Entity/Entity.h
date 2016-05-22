#ifndef EON_ENTITY_ENTITY_H
#define EON_ENTITY_ENTITY_H

#include <vector>

#include "Common.h"
#include "Entity/Component.h"

// TODO: Use hash map for components
namespace eon {
namespace entity {
class Entity {
public:
  void AddComponent(Component *component);
  void RemoveComponent(Component *component);
  int NumComponents();

private:
  std::vector<Component *> components;
};
}
}

#endif