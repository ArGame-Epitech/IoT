#ifndef APP_MANAGER_H
#define APP_MANAGER_H

#include "State.h"
#include "Interceptor.h"
#include <BLEServer.h>

#define ERROR_CREATING_STATE_MANAGER 4001
#define ERROR_CREATING_STATES 4002
#define ERROR_CREATING_SOCKET_MANAGER 4003
#define OK 2000

using namespace state;

class AppManager {
    AppManager();
    ~AppManager();
    IStateManager *get_state_manager();
    int create_states();
    int start();
    int loop();
  private:
    IStateManager *stateManager;
    //TODO: SocketManager
};

#endif // APP_MANAGER_H