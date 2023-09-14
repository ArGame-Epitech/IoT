#include "AppManager.h"
#include "SocketManager.h"
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

socket::ISocketManager* AppManager::get_socketManager_manager() {
  return socketManager;
}