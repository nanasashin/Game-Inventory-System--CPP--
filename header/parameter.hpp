#ipndef PARAMETER_HPP_
#define PARAMETER_HPP_

class Parameter {
public:
    Parameter() {}
    Parameter(
        float max_health, 
        float max_stamina, 
        float max_mana
    ) : 
        max_health(max_health),
        max_stamina(max_stamina),
        max_mana(max_mana) 
    {}

    enum Type {
        health,
        stamina, 
        mana,
    };

    enum UpdateType {
        increase, 
        decrease,
        change
    };

    struct UpdateValue {
        float value;
    };

    float current_health;
    float current_stamina;
    float current_mana;

private:
    float max_health;
    float max_stamina;
    float max_mana;

public:
    void update_value(UpdateType type, UpdateValue value) {
        switch (type) 
        {
        case UpdateType::increase:
            break;
        case UpdateType::decrease:
            break;
        case UpdateType::change:
            break;
        }
    }
}


#endif