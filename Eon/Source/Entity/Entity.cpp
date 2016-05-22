#include "Entity/Entity.h"
#include "Eon.h"

namespace eon {
namespace entity {
void Entity::AddComponent(Component *component) {
  components.push_back(component);
}

void Entity::RemoveComponent(Component *component) {
  for (int i; i < components.size(); i++) {
    if (components[i] == component) {
      components.erase(components.begin() + i);
      break;
    }
  }
}

int Entity::NumComponents() { return components.size(); }
}
}
