#include "AppManager.h"
#include "State.h"

AppManager::AppManager() {
  this->stateManager = new state::StateManager();
}

AppManager::~AppManager() {
  delete this->stateManager;
}

int AppManager::create_states() {
  return OK;
}