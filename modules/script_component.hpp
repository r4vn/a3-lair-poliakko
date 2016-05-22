#define PREFIX lair

#define GVAR_NAME(name) (format ["%1_player_%2", #PREFIX, name])

#define INIT_MODULE(name) (compile (preprocessFileLineNumbers (\
        format ["modules\%1\init.sqf", name])))

#define STRING_NAME(name) (format ["STR_%1_%2", #PREFIX, name])
