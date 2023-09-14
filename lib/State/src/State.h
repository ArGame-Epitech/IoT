#ifndef STATE_LIB_H
#define STATE_LIB_H

#include <vector>

namespace state {
    class IState {
      public:
        virtual void start() = 0;
        virtual void update() = 0;
        virtual void stop() = 0;
    };

    class IStateManager {
      public:
        virtual int add_state(IState* state) = 0;
        virtual int remove_state(IState* state) = 0;
        virtual std::vector<IState*> &get_states() = 0;
        virtual IState *&get_current_state() = 0;
    };

    class StateManager: public IStateManager {
      public:
        StateManager();
        ~StateManager();
        int add_state(IState* state) override;
        int remove_state(IState* state) override;
        std::vector<IState*> &get_states() override;
        IState *&get_current_state() override;
      private:
        std::vector<IState*> states;
        IState* currentState;
    };
}

#endif // STATE_LIB_H