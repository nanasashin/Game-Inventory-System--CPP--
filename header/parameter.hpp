#ifndef PARAMETER_HPP_
#define PARAMETER_HPP_

class Parameter {
public:
    enum Type {
        health,
        stamina, 
        mana,
        MAX_TYPE
    };

    enum Modifier {
        defense,
        MAX_MODIFIER
    };

    enum UpdateType {
        increase, 
        decrease,
        change,
        MAX_UPDATE_TYPE
    };

    struct UpdateValue {
        float value;
    };

private:
    float current_parameter[MAX_TYPE];
    float max_parameter[MAX_TYPE];

public:
    Parameter() {}
    Parameter(float max_health, float max_stamina, float max_mana) : max_parameter{max_health, max_stamina, max_mana}{
        for (int i = 0; i < MAX_TYPE; i++) {
            current_parameter[i] = max_parameter[i];
        }
    }

    void update_value(Type type, UpdateType update_type, UpdateValue value) {
        switch (update_type) 
        {
            case increase:
                current_parameter[type] += value.value;
                break;
            case decrease:
                current_parameter[type] -= value.value;
                break;
            case change:
                current_parameter[type] = value.value;
                break;
        }
    }

    void update_max_value(Type type, UpdateType update_type, UpdateValue value) {
        switch (update_type) 
        {
            case increase:
                max_parameter[type] += value.value;
                break;
            case decrease:
                max_parameter[type] -= value.value;
                break;
            case change:
                max_parameter[type] = value.value;
                break;
        }
    }
};


#endif